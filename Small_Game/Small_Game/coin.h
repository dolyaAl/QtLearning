#pragma once

#include <QObject>
#include <QGraphicsEllipseItem>
#include <QPropertyAnimation>

class Coin  : public QObject, public QGraphicsEllipseItem
{
	Q_OBJECT
	Q_PROPERTY(qreal opacity READ opacity WRITE setOpacity)
	Q_PROPERTY(QRectF rect READ rect WRITE setRect)
public:
	Coin(QGraphicsItem *parent = nullptr);
	~Coin() override;
	void explode();
private:
	bool m_explosion;
};
