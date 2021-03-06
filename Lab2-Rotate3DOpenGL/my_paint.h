#ifndef MY_PAINT_H
#define MY_PAINT_H

#include <QtGui>
#include <QGLWidget>

class My_Paint : public QGLWidget
{
private:
    GLfloat angle = 0;// Кут повороту літер
    int xRotation,
        yRotation,
        zRotation,
        scale; // переменные поворота и масштаба
    QPoint mousePos; // переменная для запоминания позиции нажатия мышки

public:
    My_Paint(QWidget *parent = 0);

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
    void scene();
    void drawAxis();
    void mousePressEvent(QMouseEvent*);   // нажатие на клавишу мыши
    void mouseMoveEvent(QMouseEvent*);    // перемещение мыши
};

#endif // MY_PAINT_H
