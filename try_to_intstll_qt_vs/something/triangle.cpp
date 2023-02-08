#include "triangle.h"
#include "qpainter.h"

Triangle::Triangle():QGraphicsItem()
{

}

Triangle::~Triangle()
{

}

QRectF Triangle::boundingRect() const
{

	return QRectF(-25,-40,50,80);
}

void Triangle::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
	QPolygon polygon;
	polygon << QPoint(0, -40) << QPoint(25, 40) << QPoint(-25, 40);
	painter->setBrush(Qt::red);
	painter->drawPolygon(polygon);
	Q_UNUSED(option);
	Q_UNUSED(widget);
}
