#pragma once
#include <QGraphicsItem>
#include <QPainter>

class triangle :
    public QGraphicsItem
{
public:
    triangle();
    ~triangle();
protected:
    QRectF boundingRect() const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
};

