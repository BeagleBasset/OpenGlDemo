#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "glwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OpenGlDemo)
{
    ui->setupUi(this);
    QWidget::setWindowTitle("OpenGlDemo");
    glWidget = new GlWidget(this);
    glWidget->setMinimumSize(300, 480);
    ui->verticalLayout_4->addWidget(glWidget);
    connect(ui->RedChannel, &QSlider::valueChanged, glWidget, &GlWidget::setRed);
    connect(ui->GreenChanel, &QSlider::valueChanged, glWidget, &GlWidget::setGreen);
    connect(ui->BlueChannel, &QSlider::valueChanged, glWidget, &GlWidget::setBlue);
    connect(ui->AlphaChannel, &QSlider::valueChanged, glWidget, &GlWidget::setAlpha);


}

MainWindow::~MainWindow()
{
    delete ui;
}
