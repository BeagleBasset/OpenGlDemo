/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <glwidget.h>

QT_BEGIN_NAMESPACE

class Ui_OpenGlDemo
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSlider *RedChannel;
    QLabel *label_2;
    QSlider *GreenChanel;
    QLabel *label_3;
    QSlider *BlueChannel;
    QLabel *label_4;
    QSlider *AlphaChannel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    GlWidget *widget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *OpenGlDemo)
    {
        if (OpenGlDemo->objectName().isEmpty())
            OpenGlDemo->setObjectName("OpenGlDemo");
        OpenGlDemo->resize(1046, 529);
        centralwidget = new QWidget(OpenGlDemo);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setEnabled(true);
        splitter->setOrientation(Qt::Orientation::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        RedChannel = new QSlider(verticalLayoutWidget);
        RedChannel->setObjectName("RedChannel");
        RedChannel->setMaximum(255);
        RedChannel->setValue(255);
        RedChannel->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout->addWidget(RedChannel);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        GreenChanel = new QSlider(verticalLayoutWidget);
        GreenChanel->setObjectName("GreenChanel");
        GreenChanel->setMaximum(255);
        GreenChanel->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout->addWidget(GreenChanel);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        BlueChannel = new QSlider(verticalLayoutWidget);
        BlueChannel->setObjectName("BlueChannel");
        BlueChannel->setMaximum(255);
        BlueChannel->setSingleStep(1);
        BlueChannel->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout->addWidget(BlueChannel);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        AlphaChannel = new QSlider(verticalLayoutWidget);
        AlphaChannel->setObjectName("AlphaChannel");
        AlphaChannel->setMaximum(255);
        AlphaChannel->setValue(255);
        AlphaChannel->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout->addWidget(AlphaChannel);

        splitter->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget = new GlWidget(verticalLayoutWidget_2);
        widget->setObjectName("widget");
        widget->setEnabled(true);
        widget->setMinimumSize(QSize(0, 10));

        verticalLayout_4->addWidget(widget, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        splitter->addWidget(verticalLayoutWidget_2);

        horizontalLayout->addWidget(splitter);

        OpenGlDemo->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(OpenGlDemo);
        statusbar->setObjectName("statusbar");
        OpenGlDemo->setStatusBar(statusbar);

        retranslateUi(OpenGlDemo);

        QMetaObject::connectSlotsByName(OpenGlDemo);
    } // setupUi

    void retranslateUi(QMainWindow *OpenGlDemo)
    {
        OpenGlDemo->setWindowTitle(QCoreApplication::translate("OpenGlDemo", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("OpenGlDemo", "V\303\266r\303\266s csatorna:", nullptr));
        label_2->setText(QCoreApplication::translate("OpenGlDemo", "Z\303\266ld csatorna:", nullptr));
        label_3->setText(QCoreApplication::translate("OpenGlDemo", "K\303\251k csatorna:", nullptr));
        label_4->setText(QCoreApplication::translate("OpenGlDemo", "\303\201ttetsz\305\221ss\303\251g:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenGlDemo: public Ui_OpenGlDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
