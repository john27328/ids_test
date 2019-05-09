#ifndef CAM_H
#define CAM_H
#include <QDebug>
#include <windows.h>
#include <math.h>
#define DBG(x) #x << (x)

class Cam
{

public:
    Cam(){}
    virtual ~Cam(){}
    virtual int setFPS(double &fps) = 0;
    virtual int getRangeFPS(double &minFPS, double &maxFPS) = 0;
    virtual int startLive() = 0;
    virtual int stopLive() = 0;
    virtual int getFrame(float **frame) = 0;
    virtual bool statusCam() = 0; // - 1 - ok
    virtual bool statusLife() = 0; // - 1 - ok

    virtual int getWidth() const = 0;

    virtual int getHeight() const = 0;
    Cam **thisCam;

private:
    int width;
    int height;
    bool isOK;
    bool isLife;
};

#endif // CAM_H
