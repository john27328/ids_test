/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *startLifePB;
    QPushButton *initPB;
    QPushButton *stopLifePB;
    QCustomPlot *colorMap;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(998, 530);
        startLifePB = new QPushButton(Widget);
        startLifePB->setObjectName(QString::fromUtf8("startLifePB"));
        startLifePB->setGeometry(QRect(10, 40, 75, 23));
        initPB = new QPushButton(Widget);
        initPB->setObjectName(QString::fromUtf8("initPB"));
        initPB->setGeometry(QRect(10, 10, 75, 23));
        stopLifePB = new QPushButton(Widget);
        stopLifePB->setObjectName(QString::fromUtf8("stopLifePB"));
        stopLifePB->setGeometry(QRect(10, 70, 75, 23));
        colorMap = new QCustomPlot(Widget);
        colorMap->setObjectName(QString::fromUtf8("colorMap"));
        colorMap->setGeometry(QRect(230, 80, 651, 351));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        startLifePB->setText(QApplication::translate("Widget", "\320\267\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214", nullptr));
        initPB->setText(QApplication::translate("Widget", "\320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214", nullptr));
        stopLifePB->setText(QApplication::translate("Widget", "\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
