#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "glwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class OpenGlDemo;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::OpenGlDemo *ui;
    GlWidget *glWidget;
};
#endif // MAINWINDOW_H
