#include "view.h"

View::View(QWidget *parent):
	QGraphicsView(parent)
{
	m_myScene = new MyScene();
	setScene(m_myScene);
	setSceneRect(0, 0, 500, 500);
}

View::~View()
{}
