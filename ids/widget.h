#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "life.h"
#include "qcustomplot.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    Life *life;
    QCPColorMap *colorMap;
    void RescaleCustomPlot(QCustomPlot *plt);

public slots:
    void createColorMap();
    void plotColorMap(float **frame);
    void resetScale();
    void resetColor();
    void background(int state);
    void saveBackground();


};

#endif // WIDGET_H
