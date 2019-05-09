#include "life.h"

Life::Life()
{
    cam = 0;
    stop = 0;
    lifeRun = 0;
    nBackground = 0;
    frame = 0;
    sBgnd = 0;
}

Life::~Life()
{
    stop = 1;

    while (lifeRun) {
        Sleep(10);
    }
    delete  cam;
    Sleep(100);
    qDebug() << "delete Life";
}

void Life::startLife()
{
    if(cam){
        width = cam->getWidth();
        height = cam->getHeight();
        frame = new float*[width];
        background = new float*[width];
        for(int i = 0; i < width; i++)
        {
            frame[i] = new float[height];
            background[i] = new float[height];
            for (int j = 0; j < height; j++){
                frame[i][j] = 0;
                background[i][j] = 0;
            }
        }
        stop = 0;
        cam->startLive();
        start();
    }
}

void Life::stopLife()
{
    if(frame)
    {
        for (int i = 0; i < width;i++) {
            delete[] frame[i];
            delete[] background[i];
        }
        delete[] frame;
        delete[] background;
        frame = 0;
        background = 0;
    }
    if(cam){
        cam->stopLive();
        stop = 1;
    }
}

void Life::initCamera()
{
    //IdsCam::initCum(&cam);
    TestCam::initCum(&cam);
}

void Life::saveBackground(int n)
{
    nBackground = n;

}

void Life::run() //доделать
{
    lifeRun = 1;
    qDebug() << "start Life";
    while (!stop)
    {
        if(cam) {
            if(nBackground > 0){
                setBackground();
            }
            else {
                getFrame();
            }
        }

    }
    lifeRun = 0;
    qDebug() << "stop Life";
    exit();
}



void Life::setSubtractBackground(bool value)
{
    sBgnd = value;
}

void Life::setBackground()
{
    qDebug() << "сохранение фона" << nBackground;
    for(int i = 0; i < width; i++){
        for (int j = 0; j < height; j++) {
            background[i][j]=0;
        }
    }
    for (int k = 0; k < nBackground; k++)
    {
        emit stateSaveBCGR(double(k) / nBackground*100);
        qDebug() << "фон" << k;
        getFrame();
        for(int i = 0; i < width; i++){
            for (int j = 0; j < height; j++) {
                background[i][j]+=frame[i][j];
            }
        }
    }
    for(int i = 0; i < width; i++){
        for (int j = 0; j < height; j++) {
            background[i][j] = background[i][j] / nBackground;
        }
    }
    emit stateSaveBCGR(100);

    nBackground = 0;

}

void Life::getFrame()
{
    if (cam->getFrame(frame)){
        //обработка кадра
        if(sBgnd && !nBackground) subtractBackground();

        //qDebug() << "frame";
        emit updateFrame(frame);
    }
}

void Life::subtractBackground()
{
    for(int i = 0; i < width; i++){
        for (int j = 0; j < height; j++) {
            frame[i][j] -= background[i][j];
        }
    }
}


int Life::getHeight() const
{
    return height;
}

int Life::getWidth() const
{
    return width;
}


