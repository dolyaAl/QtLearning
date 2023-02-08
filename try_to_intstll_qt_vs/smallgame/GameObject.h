#pragma once
#include <QGraphicsObject>
#include <QGraphicsScene>
#include <QPainter>
#include <QPolygon>
#include <QTimer>
#include <QtMath>
#include <windows.h>
class GameObject: public QGraphicsObject
{
	Q_OBJECT
public:
	GameObject(QGraphicsObject* parent = nullptr);
	~GameObject();
signals:
	void signalBullet(QPointF start, QPointF end);
protected:
	QRectF boundingRect() const;
	void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget = nullptr);
private:
	QTimer* gameTimer;
	QTimer* bulletTimer;
	QPointF target;
	bool shot;
	QPainterPath shape() const;
private slots:
	void slotGameTimer();
	void slotBulletTimer();
public slots:
	void slotTarget(QPointF point);
	void slotShot(bool shot);
};

