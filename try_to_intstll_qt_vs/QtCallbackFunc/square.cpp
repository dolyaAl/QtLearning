#include "square.h"
#include <Windows.h>

Square::Square(QGraphicsObject* parent):QGraphicsObject(parent)
{
    callBackFunc = nullptr;
    timer = new QTimer();
    connect(timer, &QTimer::timeout, this, &Square::slotTimer);
    timer->start(1000 / 33);
    
}

Square::~Square()
{
}

void Square::setCallbackFunc(void(*func)(QPointF))
{
    callBackFunc = func;
}

QRectF Square::boundingRect() const
{
    return QRectF(-15,-15,30,30);
}

void Square::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::green);
    painter->drawRect(-15, -15, 30, 30);
        Q_UNUSED(option)
        Q_UNUSED(widget)
}

void Square::slotTimer()
{
    if (GetAsyncKeyState('A'))
    {
        this->setX(this->x() - 2);
    }
    if (GetAsyncKeyState('D'))
    {
        this->setX(this->x() + 2);
    }
    if (GetAsyncKeyState('S'))
    {
        this->setY(this->y() + 2);
    }
    if (GetAsyncKeyState('W'))
    {
        this->setY(this->y() - 2);
    }
    callBackFunc(this->pos());
}
