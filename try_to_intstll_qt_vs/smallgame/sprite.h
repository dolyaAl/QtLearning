#pragma once
#include <QGraphicsObject>
#include <QPixmap>
#include <QTimer>
#include <QPainter>

class Sprite: public QGraphicsObject
{
	Q_OBJECT
public:
	Sprite(QPointF point, QGraphicsObject* parent = nullptr);
	~Sprite();
	enum {Type = QGraphicsItem::UserType + 1};
	int type() const;
private:
	QTimer* timer;
	QPixmap* spriteImage;
	int currentFrame;
private slots:
	void nextFrame();
protected:
	QRectF boundingRect() const;
	void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget = nullptr);

};

