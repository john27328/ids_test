#ifndef IDSCAM_H
#define IDSCAM_H

#include "ueye.h"

class IdsCam
{
public:
    IdsCam();
    ~IdsCam();

private:
    HIDS hCam = 0;      // 0 for the next available camera. 1-254 to access by ID
    SENSORINFO sInfo;
    CAMINFO cInfo;
    HWND hWndDisplay;
    IS_RECT rectAOI;
    int width;
    int height;
    char* ppcImgMem; // кадр
    int memID;
    int pitch;
};

#endif // IDSCAM_H
