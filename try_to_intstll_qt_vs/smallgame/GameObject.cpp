#include "GameObject.h"

GameObject::GameObject(QGraphicsObject* parent):QGraphicsObject(parent)
{
    shot = false;
	gameTimer = new QTimer();
    bulletTimer = new QTimer();
	connect(gameTimer, &QTimer::timeout, this, &GameObject::slotGameTimer);
    connect(bulletTimer, &QTimer::timeout, this, &GameObject::slotBulletTimer);
	gameTimer->start(500 / 33);
    bulletTimer->start(1000/6);
}

GameObject::~GameObject()
{
}

QRectF GameObject::boundingRect() const
{
	return QRectF(-10, -15, 20, 30);
}

void GameObject::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
	QPolygon pol;
	pol << QPoint(-10, 15) << QPoint(10, 15) << QPoint(0, -15);
	painter->setBrush(Qt::red);
	painter->drawPolygon(pol);
	Q_UNUSED(option)
	Q_UNUSED(widget)
}

QPainterPath GameObject::shape() const
{
    QPainterPath path;
    QPolygon pol;
    pol << QPoint(-10, 15) << QPoint(10, 15) << QPoint(0, -15);
    path.addPolygon(pol);
    return path;
}

void GameObject::slotBulletTimer()
{
    if (shot)
    {
        emit signalBullet(this->pos(), target);
    }
}

void GameObject::slotShot(bool shot)
{
    this->shot = shot;
}

void GameObject::slotTarget(QPointF point)
{
    target = point;
    qreal tmp = rotation();
	this->setRotation(90 + rotation() + qRadiansToDegrees(qAtan2(mapFromScene(point).y(), mapFromScene(point).x())));
    if (!this->scene()->collidingItems(this).isEmpty())
    {
        this->setRotation(tmp);
    }
}

void GameObject::slotGameTimer()
{

    if (GetAsyncKeyState('A')) {
        this->setX(this->x() - 2);
        if (!this->scene()->collidingItems(this).isEmpty())
        {
            this->setX(this->x() + 2);
        }
    }
    if (GetAsyncKeyState('D')) {
        this->setX(this->x() + 2);
        if (!this->scene()->collidingItems(this).isEmpty())
        {
            this->setX(this->x() - 2);
        }
    }
    if (GetAsyncKeyState('W')) {
        this->setY(this->y() - 2);
        if (!this->scene()->collidingItems(this).isEmpty())
        {
            this->setY(this->y() + 2);
        }
    }
    if (GetAsyncKeyState('S')) {
        this->setY(this->y() + 2);
        if (!this->scene()->collidingItems(this).isEmpty())
        {
            this->setY(this->y() - 2);
        }
    }
}
