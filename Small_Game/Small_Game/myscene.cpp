#include "myscene.h"
#include "coin.h"
#include <QRandomGenerator>


/**
 * \brief 
 * \param parent 
 */
MyScene::MyScene(QObject* parent) :
	QGraphicsScene(parent)
{
	m_timer.setInterval(30);
	connect(&m_timer, &QTimer::timeout, this, &MyScene::movePlayer);
	m_jumpAnimation = new QPropertyAnimation(this);
	m_jumpAnimation->setTargetObject(this);
	m_jumpAnimation->setPropertyName("jumpFactor");
	m_jumpAnimation->setStartValue(0);
	m_jumpAnimation->setKeyValueAt(0.5, 1);
	m_jumpAnimation->setEndValue(0);
	m_jumpAnimation->setDuration(800);
	m_jumpAnimation->setEasingCurve(QEasingCurve::OutInQuad);
	initPlayField();
	
}

/**
 * \brief 
 */
MyScene::~MyScene()
= default;

qreal MyScene::jumpFactor()
{
	return m_jumpFactor;
}

void MyScene::setJumpFactor(const qreal & pos)
{
	if (pos == m_jumpFactor)
	{
		return;
	}
	m_jumpFactor = pos;

	const qreal groundY = m_groundLevel - m_player->boundingRect().height() / 2 + 15;
	const qreal y = groundY - m_jumpAnimation->currentValue().toReal() * m_jumpHeight;
	m_player->setY(y);
	checkColliding();

	emit jumpFactorChanged(m_jumpFactor);
}

void MyScene::keyPressEvent(QKeyEvent * event)
{
	if (event->isAutoRepeat())
	{
		return;
	}
	switch (event->key())
	{
	case Qt::Key_Right:
	{
		addHorizontalInput(1);
		break;
	}
	case Qt::Key_Left:
	{
		addHorizontalInput(-1);
		break;
	}
	case Qt::Key_Up:
	{
		jump();
		break;
	}
	default:
	{
		break;
	}
	}
}

void MyScene::addHorizontalInput(int value)
{
	m_horizontalInput += value;
	m_horizontalInput = qBound(-1, m_horizontalInput, 1);
	m_player->setDirection(m_horizontalInput);
	checkTimer();
}

void MyScene::checkTimer()
{
	if (m_player->direction() == 0)
	{
		m_timer.stop();
	}
	if (!m_timer.isActive())
	{
		m_timer.start();
	}
}

void MyScene::applyParallax(qreal ratio, QGraphicsItem* item)
{
	item->setX(-ratio * (item->boundingRect().width() - width()));
}

void MyScene::jump()
{
	if (m_jumpAnimation->state() == QAbstractAnimation::Stopped)
	{
		m_jumpAnimation->start();
	}
}

void MyScene::checkColliding()
{
	for (const auto item : collidingItems(m_player))
	{
		if(const auto c = qgraphicsitem_cast<Coin*>(item))
		{
			c->explode();
		}
	}
}

void MyScene::initPlayField()
{
	setSceneRect(0, 0, 500, 340);

	m_sky = new BackgroundItem(QPixmap(":/images/sky.png"));
	addItem(m_sky);

	m_trees = new BackgroundItem(QPixmap(":/images/trees.png"));
	m_trees->setPos(0, m_groundLevel - m_trees->boundingRect().height() + 25);
	addItem(m_trees);

	m_ground = new BackgroundItem(QPixmap(":/images/ground.png"));
	m_ground->setPos(0, m_groundLevel);
	addItem(m_ground);

	/*m_grass = new BackgroundItem(QPixmap(":/grass.png"));
	m_grass->setPos(0, m_groundLevel - m_grass->boundingRect().height());
	addItem(m_grass);*/

	m_player = new Player();
	m_minX = m_player->boundingRect().width() / 2;
	m_maxX = m_fieldWidth - m_player->boundingRect().width() / 2;
	m_player->setPos(m_minX, m_groundLevel - m_player->boundingRect().height()/2 + 15);
	m_currentX = m_minX;
	addItem(m_player);

	m_coinsRect = new QGraphicsRectItem(0, 0, m_fieldWidth, m_jumpHeight);
	m_coinsRect->setPen(Qt::NoPen);
	m_coinsRect->setPos(0, m_groundLevel - m_jumpHeight);
	const int xRange = 0.94 * (m_maxX - m_minX);
	for (int i = 0; i < 25; ++i)
	{
		const auto coin = new Coin(m_coinsRect);
		coin->setPos(m_minX + QRandomGenerator::global()->bounded(0, xRange), 
			         QRandomGenerator::global()->bounded(0, m_jumpHeight));
	}
	addItem(m_coinsRect);
}

void MyScene::movePlayer()
{
	const int direction = m_player->direction();
	if (direction == 0)
	{
		return;
	}
	const int dx = direction * m_player->velocity();
	const qreal newX = qBound(m_minX, m_currentX + dx, m_maxX);
	if (m_currentX == newX) 
	{
		return;
	}
	m_currentX = newX;
	constexpr int shiftBorder = 150;
	const int rightShiftBorder = static_cast<int>(width()) - shiftBorder;

	const int visiblePlayerPos = m_currentX - m_worldShift;
	if (const int newWorldShiftRight = visiblePlayerPos - rightShiftBorder; newWorldShiftRight > 0)
	{
		m_worldShift += newWorldShiftRight;
	}
	if (const int newWorldShiftLeft = shiftBorder - visiblePlayerPos; newWorldShiftLeft > 0)
	{
		m_worldShift -= newWorldShiftLeft;
	}
	const int maxWorldShift = m_fieldWidth - qRound(width());
	m_worldShift = qBound(0, m_worldShift, maxWorldShift);
	m_player->setX(m_currentX - m_worldShift);
	checkColliding();

	const qreal ratio = static_cast<qreal>(m_worldShift) / maxWorldShift;
	applyParallax(ratio, m_sky);
	applyParallax(ratio, m_ground);
	applyParallax(ratio, m_trees);
	applyParallax(ratio, m_coinsRect);
}
