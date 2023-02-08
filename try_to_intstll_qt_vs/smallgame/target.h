#pragma once
#include <QGraphicsObject>
#include <QPainter>
#include <QRandomGenerator>
class Target: public QGraphicsObject
{
	Q_OBJECT
public:
	Target(QGraphicsObject* parent = nullptr);
	~Target();
	void hit(int damage);
protected:
	QRectF boundingRect() const;
	void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget = nullptr);
private:
	int health;
	int maxHealth;
	QPainterPath shape() const;

};

