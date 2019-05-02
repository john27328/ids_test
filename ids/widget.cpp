#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    cam = new IdsCam;
}

Widget::~Widget()
{
    delete cam;
    delete ui;
}
