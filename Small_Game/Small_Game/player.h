#pragma once

#include <QGraphicsPixmapItem>

class Player  : public QGraphicsPixmapItem
{
public:
	Player(QGraphicsItem *parent = nullptr);
	~Player();

	int direction();
	void setDirection(const int &value);

	int velocity();
	void setVelocity(const int &value);
private:
	int m_direction;
	int m_velocity;
};
