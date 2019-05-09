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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QCustomPlot *colorMap;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *initPB;
    QPushButton *startLifePB;
    QPushButton *stopLifePB;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *BCGND_SB;
    QPushButton *BCGNDpushButton;
    QProgressBar *BCGNDprogressBar;
    QCheckBox *BCGNDcheckBox;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *resetScalePushButton;
    QPushButton *resetColorPushButton;
    QLabel *label_2;
    QSpinBox *RangeColorSpinBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(998, 530);
        colorMap = new QCustomPlot(Widget);
        colorMap->setObjectName(QString::fromUtf8("colorMap"));
        colorMap->setGeometry(QRect(350, 92, 351, 249));
        colorMap->setMinimumSize(QSize(200, 200));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 77, 83));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        initPB = new QPushButton(widget);
        initPB->setObjectName(QString::fromUtf8("initPB"));

        verticalLayout->addWidget(initPB);

        startLifePB = new QPushButton(widget);
        startLifePB->setObjectName(QString::fromUtf8("startLifePB"));

        verticalLayout->addWidget(startLifePB);

        stopLifePB = new QPushButton(widget);
        stopLifePB->setObjectName(QString::fromUtf8("stopLifePB"));

        verticalLayout->addWidget(stopLifePB);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 110, 139, 111));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        BCGND_SB = new QSpinBox(widget1);
        BCGND_SB->setObjectName(QString::fromUtf8("BCGND_SB"));
        BCGND_SB->setValue(15);

        horizontalLayout->addWidget(BCGND_SB);


        verticalLayout_2->addLayout(horizontalLayout);

        BCGNDpushButton = new QPushButton(widget1);
        BCGNDpushButton->setObjectName(QString::fromUtf8("BCGNDpushButton"));

        verticalLayout_2->addWidget(BCGNDpushButton);

        BCGNDprogressBar = new QProgressBar(widget1);
        BCGNDprogressBar->setObjectName(QString::fromUtf8("BCGNDprogressBar"));
        BCGNDprogressBar->setValue(24);

        verticalLayout_2->addWidget(BCGNDprogressBar);

        BCGNDcheckBox = new QCheckBox(widget1);
        BCGNDcheckBox->setObjectName(QString::fromUtf8("BCGNDcheckBox"));

        verticalLayout_2->addWidget(BCGNDcheckBox);

        widget2 = new QWidget(Widget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(351, 60, 376, 25));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        resetScalePushButton = new QPushButton(widget2);
        resetScalePushButton->setObjectName(QString::fromUtf8("resetScalePushButton"));

        horizontalLayout_2->addWidget(resetScalePushButton);

        resetColorPushButton = new QPushButton(widget2);
        resetColorPushButton->setObjectName(QString::fromUtf8("resetColorPushButton"));

        horizontalLayout_2->addWidget(resetColorPushButton);

        label_2 = new QLabel(widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        RangeColorSpinBox = new QSpinBox(widget2);
        RangeColorSpinBox->setObjectName(QString::fromUtf8("RangeColorSpinBox"));
        RangeColorSpinBox->setMinimum(1);
        RangeColorSpinBox->setMaximum(100);
        RangeColorSpinBox->setSingleStep(10);
        RangeColorSpinBox->setValue(100);
        RangeColorSpinBox->setDisplayIntegerBase(10);

        horizontalLayout_2->addWidget(RangeColorSpinBox);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        initPB->setText(QApplication::translate("Widget", "\320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214", nullptr));
        startLifePB->setText(QApplication::translate("Widget", "\320\267\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214", nullptr));
        stopLifePB->setText(QApplication::translate("Widget", "\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QApplication::translate("Widget", "\321\207\320\270\321\201\320\273\320\276 \321\203\321\201\321\200\320\265\320\264\320\275\320\265\320\275\320\270\320\271", nullptr));
        BCGNDpushButton->setText(QApplication::translate("Widget", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\204\320\276\320\275", nullptr));
        BCGNDcheckBox->setText(QApplication::translate("Widget", "\320\262\321\213\321\207\320\270\321\202\320\260\321\202\321\214 \321\204\320\276\320\275", nullptr));
        resetScalePushButton->setText(QApplication::translate("Widget", "\321\201\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \320\274\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        resetColorPushButton->setText(QApplication::translate("Widget", "\321\201\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \321\206\320\262\320\265\321\202\320\276\320\262\321\203\321\216 \321\210\320\272\320\260\320\273\321\203", nullptr));
        label_2->setText(QApplication::translate("Widget", "\320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
