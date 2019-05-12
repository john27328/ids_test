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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *initPB;
    QPushButton *startLifePB;
    QPushButton *stopLifePB;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *BCGND_SB;
    QPushButton *BCGNDpushButton;
    QProgressBar *BCGNDprogressBar;
    QCheckBox *BCGNDcheckBox;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *sectionX;
    QCustomPlot *sectionY;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *resetScalePushButton;
    QPushButton *resetColorPushButton;
    QLabel *label_2;
    QSpinBox *RangeColorSpinBox;
    QCustomPlot *colorMap;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(998, 530);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 77, 83));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        initPB = new QPushButton(layoutWidget);
        initPB->setObjectName(QString::fromUtf8("initPB"));

        verticalLayout->addWidget(initPB);

        startLifePB = new QPushButton(layoutWidget);
        startLifePB->setObjectName(QString::fromUtf8("startLifePB"));

        verticalLayout->addWidget(startLifePB);

        stopLifePB = new QPushButton(layoutWidget);
        stopLifePB->setObjectName(QString::fromUtf8("stopLifePB"));

        verticalLayout->addWidget(stopLifePB);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 110, 139, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        BCGND_SB = new QSpinBox(layoutWidget1);
        BCGND_SB->setObjectName(QString::fromUtf8("BCGND_SB"));
        BCGND_SB->setValue(15);

        horizontalLayout->addWidget(BCGND_SB);


        verticalLayout_2->addLayout(horizontalLayout);

        BCGNDpushButton = new QPushButton(layoutWidget1);
        BCGNDpushButton->setObjectName(QString::fromUtf8("BCGNDpushButton"));

        verticalLayout_2->addWidget(BCGNDpushButton);

        BCGNDprogressBar = new QProgressBar(layoutWidget1);
        BCGNDprogressBar->setObjectName(QString::fromUtf8("BCGNDprogressBar"));
        BCGNDprogressBar->setValue(24);

        verticalLayout_2->addWidget(BCGNDprogressBar);

        BCGNDcheckBox = new QCheckBox(layoutWidget1);
        BCGNDcheckBox->setObjectName(QString::fromUtf8("BCGNDcheckBox"));

        verticalLayout_2->addWidget(BCGNDcheckBox);

        splitter = new QSplitter(Widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(180, 20, 801, 481));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        sectionX = new QCustomPlot(widget);
        sectionX->setObjectName(QString::fromUtf8("sectionX"));
        sectionX->setMinimumSize(QSize(200, 100));

        verticalLayout_3->addWidget(sectionX);

        sectionY = new QCustomPlot(widget);
        sectionY->setObjectName(QString::fromUtf8("sectionY"));
        sectionY->setMinimumSize(QSize(200, 100));

        verticalLayout_3->addWidget(sectionY);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        resetScalePushButton = new QPushButton(widget1);
        resetScalePushButton->setObjectName(QString::fromUtf8("resetScalePushButton"));

        horizontalLayout_2->addWidget(resetScalePushButton);

        resetColorPushButton = new QPushButton(widget1);
        resetColorPushButton->setObjectName(QString::fromUtf8("resetColorPushButton"));

        horizontalLayout_2->addWidget(resetColorPushButton);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        RangeColorSpinBox = new QSpinBox(widget1);
        RangeColorSpinBox->setObjectName(QString::fromUtf8("RangeColorSpinBox"));
        RangeColorSpinBox->setMinimum(1);
        RangeColorSpinBox->setMaximum(100);
        RangeColorSpinBox->setSingleStep(10);
        RangeColorSpinBox->setValue(100);
        RangeColorSpinBox->setDisplayIntegerBase(10);

        horizontalLayout_2->addWidget(RangeColorSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        colorMap = new QCustomPlot(widget1);
        colorMap->setObjectName(QString::fromUtf8("colorMap"));
        colorMap->setMinimumSize(QSize(200, 200));

        verticalLayout_4->addWidget(colorMap);

        verticalLayout_4->setStretch(1, 1);
        splitter->addWidget(widget1);

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
