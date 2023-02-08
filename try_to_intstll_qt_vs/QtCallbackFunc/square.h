#pragma once
#include <QGraphicsObject>
#include <QTimer>
#include <QPainter>

class Square :
    public QGraphicsObject
{
    Q_OBJECT
public:
    Square(QGraphicsObject* parent = nullptr);
    ~Square();
    void setCallbackFunc(void (*func)(QPointF));
protected:
    QRectF boundingRect() const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget = nullptr);
private:
    void (*callBackFunc)(QPointF point);
    QTimer* timer;
private slots:
    void slotTimer();
};

