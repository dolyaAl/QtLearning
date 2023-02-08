#include "paintscene.h"
#include "square.h"
#include "triangle.h"
#include "romb.h"

PaintScene::PaintScene(QObject* parent)
{
	
}

PaintScene::~PaintScene()
{
}

int PaintScene::typeFigure() const
{
	return m_typeFigure;
}

void PaintScene::setTypeFigure(const int type)
{
	m_typeFigure = type;
}

void PaintScene::mousePressEvent(QGraphicsSceneMouseEvent* event)
{
    switch (m_typeFigure) {
    case SquareType: {
        Square* item = new Square(event->scenePos());
        item->setPos(event->pos());
        tempFigure = item;
        break;
    }
    case RombType: {
        Romb* item = new Romb(event->scenePos());
        item->setPos(event->pos());
        tempFigure = item;
        break;
    }
    case TriangleType: {
        Triangle* item = new Triangle(event->scenePos());
        item->setPos(event->pos());
        tempFigure = item;
        break;
    }
    default: {
        Square* item = new Square(event->scenePos());
        item->setPos(event->pos());
        tempFigure = item;
        break;
    }
    }
    this->addItem(tempFigure);
}

void PaintScene::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{
	this->tempFigure->setEndPoint(event->scenePos());
	this->update(QRectF(0, 0, this->width(), this->height()));
}