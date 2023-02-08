#pragma once

#include <QGraphicsScene>
#include <QPropertyAnimation>
#include <QTimer>
#include <QKeyEvent>
#include "player.h"
#include "backgrounditem.h"

class MyScene : public QGraphicsScene
{
	Q_OBJECT
	Q_PROPERTY(qreal jumpFactor
			   READ jumpFactor
			   WRITE setJumpFactor
			   NOTIFY jumpFactorChanged)
public:
	explicit MyScene(QObject *parent = nullptr);
	~MyScene() override;

	qreal jumpFactor();
	void setJumpFactor(const qreal & pos);
signals:
	void jumpFactorChanged(qreal);
private:
	void keyPressEvent(QKeyEvent* event) override;
	void addHorizontalInput(int value);
	void checkTimer();
	void applyParallax(qreal ratio, QGraphicsItem* item);
	void jump();
	void checkColliding();
	void initPlayField();
private slots:
	void movePlayer();
private:
	
	int m_fieldWidth{1000};
	int m_worldShift{0};

	//player fields
	qreal m_minX{0};
	qreal m_maxX{500};
	qreal m_currentX{0};
	qreal m_groundLevel{450};
	QTimer m_timer;
	Player* m_player{new Player};
	int m_horizontalInput{0};
	qreal m_jumpFactor{0};
	int m_jumpHeight{50};
	//anim
	QPropertyAnimation* m_jumpAnimation;

	//background fields
	BackgroundItem* m_sky{};//layout 1 slowest
	BackgroundItem* m_trees{};//layout 2
	BackgroundItem* m_grass{};//layout 3
	BackgroundItem* m_ground{};//layout 4 fastest
	QGraphicsRectItem* m_coinsRect{};

};
