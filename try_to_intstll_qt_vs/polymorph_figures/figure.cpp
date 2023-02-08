#include "figure.h"

Figure::Figure(QPointF point, QObject* parent):QObject(parent), QGraphicsItem()
{
	this->setStartPoint(mapFromScene(point));
	this->setEndPoint(mapFromScene(point));

	connect(this, &Figure::pointChanged, this, &Figure::updateRomb);

}

Figure::~Figure()
{
}

QPointF Figure::startPoint() const
{
	return m_startPoint;
}

QPointF Figure::endPoint() const
{
	return m_endPoint;
}

void Figure::setStartPoint(const QPointF point)
{
	m_startPoint = mapFromScene(point);
	emit pointChanged();
}

void Figure::setEndPoint(const QPointF point)
{
	m_endPoint = mapFromScene(point);
	emit pointChanged();
}

QRectF Figure::boundingRect() const
{
	return QRectF((endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x()) - 5,
		(endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y()) - 5,
		qAbs(endPoint().x() - startPoint().x()) + 10,
		qAbs(endPoint().y() - startPoint().y()) + 10);
}

void Figure::updateRomb()
{
	this->update((endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x()) - 5,
		(endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y()) - 5,
		qAbs(endPoint().x() - startPoint().x()) + 10,
		qAbs(endPoint().y() - startPoint().y()) + 10);
}