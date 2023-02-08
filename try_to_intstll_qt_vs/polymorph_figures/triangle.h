#pragma once
#include "figure.h"
class Triangle : public Figure
{
	Q_OBJECT
public:
	Triangle(QPointF point, QObject* parent = nullptr);
	~Triangle();
private:
	void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
};

