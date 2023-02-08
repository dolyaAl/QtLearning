#pragma once
#include <QGraphicsObject>
#include <QGraphicsScene>
#include <QPainter>
#include <QTimer>
#include <QtMath>
#include "sprite.h"
class Bullet : public QGraphicsObject
{
	Q_OBJECT
public:
	Bullet(QGraphicsObject* hero, QPointF start, QPointF end, QGraphicsObject* parent = nullptr);
	~Bullet();
	void setCallBackFunc(void (*func)(QGraphicsItem* item));
protected:
	QRectF boundingRect() const;
	void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget = nullptr);
private:
	QGraphicsObject* hero;
	QTimer* bulletTimer;
	void (*callBackFunc)(QGraphicsItem* item);
	QPainterPath shape() const;
private slots:
	void slotTimer();
};
