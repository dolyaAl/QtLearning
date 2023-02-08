#pragma once
#include "figure.h"
class Romb: public Figure
{
	Q_OBJECT
public:
	Romb(QPointF point, QObject* parent = nullptr);
	~Romb();
private:
	void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
};

