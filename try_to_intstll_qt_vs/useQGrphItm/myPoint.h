#pragma once

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>

class myPoint : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    myPoint(QObject* parent = nullptr);
    ~myPoint();
signals:
    void signal1();
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
private:
    QRectF boundingRect() const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
};

