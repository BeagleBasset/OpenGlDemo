#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QObject>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QMouseEvent>
#include <QMatrix4x4>
#include <QQuaternion>
#include <QVector2D>
#include <QBasicTimer>
#include <QOpenGLShaderProgram>
#include <QOpenGLTexture>
#include <QOpenGLBuffer>



class GlWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    GlWidget(QWidget *parent = nullptr);
    ~GlWidget();
    void drawPyramidGeometry(QOpenGLShaderProgram *program);
public slots:
    void setXRotation(int angle);
    void setYRotation(int angle);
    void setZRotation(int angle);
    void setRed(int value);
    void setGreen(int value);
    void setBlue(int value);
    void setAlpha(int value);
signals:
    void xRotationChanged(int angle);
    void yRotationChanged(int angle);
    void zRotationChanged(int angle);
protected:
    void initializeGL() override;
    void paintGL() override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;
    void resizeGL(int w, int h) override;
private:
    void initPyramidGeometry();
    void initShaders();
    QOpenGLBuffer arrayBuf;
    QOpenGLBuffer indexBuf;
    QOpenGLShaderProgram program;

    QPoint lastMousePosition;

    QMatrix4x4 projection;

    int m_xRot = 0;
    int m_yRot = 0;
    int m_zRot = 0;
    float zoom = -5.0f;
    QPoint m_lastPos;

    QVector4D color = QVector4D(1.0f, 0.0f, 0.0f, 1.0f);

};

#endif // GLWIDGET_H
