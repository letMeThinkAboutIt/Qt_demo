#include "posLabel.h"
#include <QDebug>

posLabel::posLabel()
{

}

posLabel::posLabel(QWidget * parent) : QLabel(parent)
{

}

void posLabel::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "press";
    qDebug() << event->globalX() << " " << event->globalY();
    qDebug() << event->localPos().x() << " " << event->localPos().y();
    emit mousePress(event->localPos());
}

void posLabel::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug() << "release";
    qDebug() << event->globalX() << " " << event->globalY();
    qDebug() << event->localPos().x() << " " << event->localPos().y();
    emit mouseRelease();
}

void posLabel::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() << "move";
    qDebug() << event->globalX() << " " << event->globalY();
    qDebug() << event->localPos().x() << " " << event->localPos().y();

    emit mouseMove(event->localPos());
}
