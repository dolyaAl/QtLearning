#include "target.h"

Target::Target(QGraphicsObject* parent): QGraphicsObject(parent)
{
	health = QRandomGenerator::global()->bounded(1, 15);
	maxHealth = health;
}

Target::~Target()
{

}

void Target::hit(int damage)
{
	health -= damage;
	if (health <= 0)
	{
		this->deleteLater();
	}
	else
	{
		this->update();
	}
}

QRectF Target::boundingRect() const
{
	return QRectF(-20, -20, 40, 40);
}

void Target::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
	painter->setPen(Qt::red);
	painter->setBrush(Qt::lightGray);
	painter->drawEllipse(-19, -19, 38, 38);

	painter->setPen(Qt::NoPen);
	painter->setBrush(Qt::red);
	painter->drawEllipse(-9.5, -9.5, 19, 19);
	
	painter->setBrush(Qt::green);
	painter->drawRect(-20, -20, int(40*health/maxHealth), 3);

	Q_UNUSED(option)
	Q_UNUSED(widget)
}

QPainterPath Target::shape() const
{
	QPainterPath path;
	path.addEllipse(this->boundingRect());
	return path;
}
