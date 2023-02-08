#include "scene.h"

Scene::Scene(QGraphicsScene* parent):QGraphicsScene(parent)
{
}

Scene::~Scene()
{
}

void Scene::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{
	emit signalTargetCoordinate(event->scenePos());
}

void Scene::mousePressEvent(QGraphicsSceneMouseEvent* event)
{
	emit signalShot(true);
	Q_UNUSED(event)
}

void Scene::mouseReleaseEvent(QGraphicsSceneMouseEvent* event)
{
	emit signalShot(false);
	Q_UNUSED(event)
}
