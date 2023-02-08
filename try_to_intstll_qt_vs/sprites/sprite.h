#pragma once
#include <QGraphicsObject>
#include <QPainter>
#include <QPixmap>
#include <QTimer>
class Sprite :
    public QGraphicsObject
{
    Q_OBJECT
public:
    Sprite(QGraphicsObject* parent = nullptr);
    ~Sprite();
protected:
    QRectF boundingRect() const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget = nullptr);
private:
    QTimer* timer;
    QPixmap* spriteImage;
    int currentFrame;
private slots:
    void nextFrame();

};

