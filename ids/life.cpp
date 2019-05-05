#include "life.h"

Life::Life()
{
    cam = 0;
    stop = 0;
    lifeRun = 0;
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
        for(int i = 0; i < width; i++)
            frame[i] = new float[height];
        stop = 0;
        cam->startLive();
        start();
    }
}

void Life::stopLife()
{
    if(cam){
        cam->stopLive();
        stop = 1;
    }
}

void Life::initCamera()
{
    IdsCam::initCum(&cam);
}

void Life::run() //доделать
{
    lifeRun = 1;
    qDebug() << "start Life";
    while (!stop)
    {
        if(cam)
            if (cam->getFrame(frame)){
                //обработка кадра
                qDebug() << "frame";
                emit updateFrame(frame);
            }
    }
    lifeRun = 0;
    qDebug() << "stop Life";
    exit();
}

int Life::getHeight() const
{
    return height;
}

int Life::getWidth() const
{
    return width;
}


