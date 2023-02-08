#pragma once
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include "figure.h"
class PaintScene: public QGraphicsScene
{
	Q_OBJECT
	Q_PROPERTY(int type_figure
				READ typeFigure
				WRITE setTypeFigure
				NOTIFY typeFigureChanged)
public:
	PaintScene(QObject* parent = nullptr);
	~PaintScene();

	int typeFigure() const;
	void setTypeFigure(const int type);
	enum FigureTypes { SquareType, RombType, TriangleType };
signals:
	void typeFigureChanged();
private:
	Figure* tempFigure;
	int m_typeFigure;

	void mousePressEvent(QGraphicsSceneMouseEvent* event);
	void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
};

