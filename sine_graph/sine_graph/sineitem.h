#pragma once

#include <QGraphicsItem>
#include <QPen>
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QGraphicsSceneMouseEvent>

class SineItem  : public QGraphicsItem
{
public:
	SineItem(QGraphicsItem *parent = nullptr);
	~SineItem();

	float maxX();
	void setMaxX(float value);
protected:
	QRectF boundingRect() const override;
	void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override;
private:
	float m_maxX;
	void mousePressEvent(QGraphicsSceneMouseEvent* event);
};
