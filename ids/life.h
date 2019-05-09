#ifndef LIFE_H
#define LIFE_H
#include <QThread>
#include <math.h>
#include "idscam.h"
#include "testcam.h"
#include "windows.h"

class Life: public QThread
{
Q_OBJECT

public:
    Life();
    ~Life();


    int getWidth() const;

    int getHeight() const;



private:
    void run();
    bool stop;
    bool lifeRun;
    Cam *cam;
    int width;
    int height;
    float **frame;
    float **background;
    bool sBgnd;
    int nBackground;
    void setBackground();
    void getFrame();
    void subtractBackground();

public slots:
    void startLife();
    void stopLife();
    void initCamera();
    void saveBackground(int n);
    void setSubtractBackground(bool value);
signals:
    void updateFrame(float ** frame);
    void stateSaveBCGR(int);
};

#endif // LIFE_H
