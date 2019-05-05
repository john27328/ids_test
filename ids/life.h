#ifndef LIFE_H
#define LIFE_H
#include <QThread>
#include <math.h>
#include "idscam.h"
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
    IdsCam *cam;
    int width;
    int height;
    float **frame;

public slots:
    void startLife();
    void stopLife();
    void initCamera();
signals:
    void updateFrame(float ** frame);
};

#endif // LIFE_H
