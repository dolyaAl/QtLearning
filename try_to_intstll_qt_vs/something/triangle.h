#pragma once
#include <qgraphicsitem.h>


class Triangle: public QGraphicsItem
{
public:
	Triangle();
	~Triangle();
protected:
	QRectF boundingRect() const;
	void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
};