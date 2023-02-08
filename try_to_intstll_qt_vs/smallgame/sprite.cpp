#include "sprite.h"

Sprite::Sprite(QPointF point, QGraphicsObject* parent): QGraphicsObject(parent)
{
	this->setPos(point);
	currentFrame = 0;
	spriteImage = new QPixmap(":/GameWindow/sprites/qpixmap_sprite.png");

	timer = new QTimer();
	connect(timer, &QTimer::timeout, this, &Sprite::nextFrame);
	timer->start(25);
}

Sprite::~Sprite()
{
}

int Sprite::type() const
{
	return Type;
}

QRectF Sprite::boundingRect() const
{
	return QRectF(-10, -10, 20, 20);
}

void Sprite::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
	painter->drawPixmap(-10, -10, *spriteImage, currentFrame, 0, 20, 20);
	Q_UNUSED(option)
	Q_UNUSED(widget)
}

void Sprite::nextFrame()
{
	currentFrame += 20;
	if (currentFrame >= 300)
	{
		this->deleteLater();
	}
	else
	{
		this->update();
	}
}
