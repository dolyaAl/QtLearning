#include "myPoint.h"

myPoint::myPoint(QObject* parent):QObject(parent), QGraphicsItem()
{
}

myPoint::~myPoint()
{

}

void myPoint::mousePressEvent(QGraphicsSceneMouseEvent* event)
{
	emit signal1();
	QGraphicsItem::mousePressEvent(event);
}

QRectF myPoint::boundingRect() const
{
	return QRectF(0, 0, 100, 100);
}

void myPoint::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
	painter->setBrush(Qt::black);
	painter->drawEllipse(QRect(0, 0, 100, 100));
	Q_UNUSED(option);
	Q_UNUSED(widget);
}
