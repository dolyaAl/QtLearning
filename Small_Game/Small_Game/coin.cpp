#include "coin.h"

#include <QParallelAnimationGroup>
#include <QPen>

Coin::Coin(QGraphicsItem *parent): 
	QGraphicsEllipseItem(parent),
	m_explosion(false)
{
	setPen(QPen(Qt::NoPen));
	setBrush(QBrush(Qt::yellow));
	setRect(-5, -5, 10, 10);
}

Coin::~Coin()
{}

void Coin::explode()
{
	if (m_explosion)
	{
		return;
	}
	m_explosion = true;
	const auto fadeAnimation = new QPropertyAnimation(this, "opacity");
	fadeAnimation->setStartValue(opacity());
	fadeAnimation->setEndValue(0);
	fadeAnimation->setDuration(1000);

	const auto scaleAnimation = new QPropertyAnimation(this, "rect");
	scaleAnimation->setStartValue(rect());
	scaleAnimation->setEndValue(0);
	scaleAnimation->setDuration(1000);

	const auto group = new QParallelAnimationGroup(this);
	group->addAnimation(scaleAnimation);
	group->addAnimation(fadeAnimation);

	connect(group, &QParallelAnimationGroup::finished, this, &Coin::deleteLater);
	group->start();
}
