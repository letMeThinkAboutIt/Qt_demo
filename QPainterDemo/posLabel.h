#ifndef POSLABEL_H
#define POSLABEL_H

#include <QLabel>
#include <QMouseEvent>
#include <QWidget>

class posLabel : public QLabel
{
    Q_OBJECT
public:
    posLabel();
    posLabel(QWidget * );

    void mousePressEvent(QMouseEvent *event) override; //单击

    void mouseReleaseEvent(QMouseEvent *event) override; //释放

//    void mouseDoubleClickEvent(QMouseEvent *event) override; //双击

    void mouseMoveEvent(QMouseEvent *event) override; //移动

signals:
    void mouseMove(QPointF pos);
    void mousePress(QPointF);
    void mouseRelease();
};

#endif // POSLABEL_H
