#include "bullet.h"

Bullet::Bullet(QGraphicsObject* hero, QPointF start, QPointF end, QGraphicsObject* parent): QGraphicsObject(parent)
{
	this->hero = hero;
	callBackFunc = nullptr;
	this->setPos(start);
	this->setRotation(90 + qRadiansToDegrees(
		qAtan2((end - start).y(), (end - start).x())));
	bulletTimer = new QTimer();
	connect(bulletTimer, &QTimer::timeout, this, &Bullet::slotTimer);
	bulletTimer->start(500 / 33);
}

Bullet::~Bullet()
{
}

void Bullet::setCallBackFunc(void(*func)(QGraphicsItem* item))
{
	callBackFunc = func;
}

QRectF Bullet::boundingRect() const
{
	return QRectF(0, 0, 2, 4);
}

void Bullet::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
	painter->setBrush(Qt::black);
	painter->drawRect(0, 0, 2, 3);
	Q_UNUSED(option)
	Q_UNUSED(widget)
}

QPainterPath Bullet::shape() const
{
	QPainterPath path;
	path.addRect(-10000, -10000, 1, 1);
	return path;
}

void Bullet::slotTimer()
{
	this->setX(5 * qCos(qDegreesToRadians(rotation() - 90)) + this->x());
	this->setY(5 * qSin(qDegreesToRadians(rotation() - 90)) + this->y());
	QList<QGraphicsItem*> found = this->scene()->items(this->pos());
	for (auto itm : found)
	{
		if (itm != this && itm != hero && itm->type() != UserType + 1)
		{
			this->scene()->addItem(new Sprite(this->pos()));
			callBackFunc(itm);
			this->deleteLater();
		}
	}
	if ((this->x() > 250) || (this->x() < -250) || (this->y() > 250) || (this->y() < -250))
	{
		this->deleteLater();
	}
}
