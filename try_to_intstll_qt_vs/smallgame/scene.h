#pragma once
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
class Scene : public QGraphicsScene
{
    Q_OBJECT
public:
    Scene(QGraphicsScene* parent = nullptr);
    ~Scene();
signals:
    void signalTargetCoordinate(QPointF point);
    void signalShot(bool shot);

private:
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event);
};

