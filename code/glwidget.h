#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QImage>

#include "glview.h"
#include "tracking_defines.h"

class glWidget : public Glview
{
    Q_OBJECT
private:
    GLuint texture_[1];
    //head positions in cm relative to screen center.
    head_t head_;

public:
    glWidget(QWidget *parent = 0);
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();
    void loadTexture(QString textureName);

signals:

public slots:
    void slotNewHead(head_t pPos);
    void slotMoveHead(int pAxis, float pDelta);
};

#endif // GLWIDGET_H
