#include "player.h"

Player::Player(QGraphicsItem* parent) :
	QGraphicsPixmapItem(parent),
	m_direction(0)
{	
	const QPixmap pixmap(":/images/elephant.png");
	setPixmap(pixmap);
	setOffset(-pixmap.width() / 2, -pixmap.height() / 2);
	m_velocity = 4;
}

Player::~Player()
= default;

int Player::direction()
{
	return m_direction;
}

void Player::setDirection(const int &value)
{
	m_direction = value;
	if (m_direction != 0)
	{
		QTransform transform;
		if (m_direction > 0)
		{
			transform.scale(-1, 1);//symmetry 
		}
		setTransform(transform);
	}
}

int Player::velocity()
{
	return m_velocity;
}

void Player::setVelocity(const int &value)
{
	m_velocity = value;
}
