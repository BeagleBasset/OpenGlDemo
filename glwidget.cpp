#include "glwidget.h"

#include <QVector2D>
#include <QVector3D>

struct VertexData
{
    QVector3D position;
};


GlWidget::GlWidget(QWidget *parent) : QOpenGLWidget(parent), indexBuf(QOpenGLBuffer::IndexBuffer)
{

}

GlWidget::~GlWidget()
{
    arrayBuf.destroy();
    indexBuf.destroy();
}

void GlWidget::drawPyramidGeometry(QOpenGLShaderProgram *program)
{
    // Tell OpenGL which VBOs to use
    arrayBuf.bind();
    indexBuf.bind();

    GLint currentVAO = 0;
    glGetIntegerv(GL_VERTEX_ARRAY_BINDING, &currentVAO);
    qDebug() << "Current VAO:" << currentVAO;

    GLint currentVBO = 0;
    glGetIntegerv(GL_ARRAY_BUFFER_BINDING, &currentVBO);
    qDebug() << "Current VBO:" << currentVBO;

    GLint currentIBO = 0;
    glGetIntegerv(GL_ELEMENT_ARRAY_BUFFER_BINDING, &currentIBO);
    qDebug() << "Current IBO:" << currentIBO;

    // Offset for position
    quintptr offset = 0;

    // Tell OpenGL programmable pipeline how to locate vertex position data
    int vertexLocation = program->attributeLocation("a_position");
    program->enableAttributeArray(vertexLocation);
    program->setAttributeBuffer(vertexLocation, GL_FLOAT, offset, 3, sizeof(VertexData));

    // Draw cube geometry using indices from VBO 1
    glDrawElements(GL_TRIANGLE_STRIP, 18, GL_UNSIGNED_SHORT, nullptr);
}

static void qNormalizeAngle(int &angle)
{
    while (angle < 0)
        angle += 360 * 16;
    while (angle > 360 * 16)
        angle -= 360 * 16;
}

void GlWidget::setXRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != m_xRot) {
        m_xRot = angle;
        emit xRotationChanged(angle);
        update();
    }
}

void GlWidget::setYRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != m_yRot) {
        m_yRot = angle;
        emit yRotationChanged(angle);
        update();
    }
}

void GlWidget::setZRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != m_zRot) {
        m_zRot = angle;
        emit zRotationChanged(angle);
        update();
    }
}

void GlWidget::setRed(int value)
{
    color.setX(value / 255.0f);
    update();
}

void GlWidget::setGreen(int value)
{
    color.setY(value / 255.0f);
    update();
}

void GlWidget::setBlue(int value)
{
    color.setZ(value / 255.0f);
    update();
}

void GlWidget::setAlpha(int value)
{
    color.setW(value / 255.0f);
     qDebug() << "Current Alpha:" << color;
    update();
}

void GlWidget::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(0.0f,0.0f,0.3f,0.0f);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // Generate 2 VBOs
    arrayBuf.create();
    indexBuf.create();

    initShaders();

    // Initializes cube geometry and transfers it to VBOs
    initPyramidGeometry();

}

void GlWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);

    program.bind();

    QMatrix4x4 matrix;
    matrix.translate(0.0, 0.0, zoom);
    matrix.rotate(m_xRot / 16.0, 1, 0, 0);
    matrix.rotate(m_yRot / 16.0, 0, 1, 0);

    program.setUniformValue("color", color);
    program.setUniformValue("mvp_matrix", projection * matrix);

    drawPyramidGeometry(&program);
}

void GlWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        lastMousePosition = event->pos();
    }
}

void GlWidget::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        // Kiszámoljuk az egér mozgását
        int dx = event->x() - lastMousePosition.x();
        int dy = event->y() - lastMousePosition.y();

        // Frissítjük a forgatási értékeket
        setXRotation(m_xRot + dy);
        setYRotation(m_yRot + dx);

        // Elmentjük az új pozíciót
        lastMousePosition = event->pos();
    }
}

void GlWidget::wheelEvent(QWheelEvent *event)
{
    int delta = event->angleDelta().y(); // Görgetés iránya
    float zoomSpeed = 0.1f; // Zoomolás érzékenysége

    if (delta > 0) {
        zoom += zoomSpeed; // Közeledés
    } else {
        zoom -= zoomSpeed; // Távolodás
    }

    update(); // Újrarajzolás
}

void GlWidget::resizeGL(int w, int h)
{
    // Calculate aspect ratio
    qreal aspect = qreal(w) / qreal(h ? h : 1);

    // Set near plane to 3.0, far plane to 7.0, field of view 45 degrees
    const qreal zNear = 3.0, zFar = 7.0, fov = 45.0;

    // Reset projection
    projection.setToIdentity();

    // Set perspective projection
    projection.perspective(fov, aspect, zNear, zFar);
}

void GlWidget::initPyramidGeometry()
{

    // For cube we would need only 8 vertices but we have to
    // duplicate vertex for each face because texture coordinate
    // is different.
    float pyramidPositions[] = {
        // Alap (négyzet)
        -1.0f, -1.0f, 1.0f,   // 0
        1.0f, -1.0f, 1.0f,    // 1
        1.0f, -1.0f, -1.0f,   // 2
        -1.0f, -1.0f, -1.0f,  // 3
        // Csúcs
        0.0f, 1.0f, 0.0f      // 4
    };

    // Új index buffer a helyes háromszögekkel
    GLushort indices[] = {
        // Alap (két háromszögből áll, helyes sorrenddel)
        0, 1, 3,  // Első háromszög
        1, 2, 3,  // Második háromszög

        // Oldallapok
        0, 1, 4,  // Front
        1, 2, 4,  // Right
        2, 3, 4,  // Back
        3, 0, 4   // Left
    };

    //! [1]
    // VAO bindolás előtt
    arrayBuf.bind();
    arrayBuf.allocate(pyramidPositions, sizeof(pyramidPositions));

    // Index buffer beállítás
    indexBuf.bind();
    indexBuf.allocate(indices, sizeof(indices));
}

void GlWidget::initShaders()
{
    // Compile vertex shader
    if (!program.addShaderFromSourceFile(QOpenGLShader::Vertex, "E:/Github/qt/OpenGlDemo/vshader.glsl"))
        close();

    // Compile fragment shader
    if (!program.addShaderFromSourceFile(QOpenGLShader::Fragment, "E:/Github/qt/OpenGlDemo/fshader.glsl"))
        close();

    // Link shader pipeline
    if (!program.link())
        close();

    // Bind shader pipeline for use
    if (!program.bind())
        close();
}


