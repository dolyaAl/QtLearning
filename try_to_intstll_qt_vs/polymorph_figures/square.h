#pragma once
#include "figure.h"
class Square : public Figure
{
	Q_OBJECT
public:
	Square(QPointF point, QObject* parent = nullptr);
	~Square();
private:
	void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
};


