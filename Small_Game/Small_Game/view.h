#pragma once

#include <QGraphicsView>
#include "myscene.h"

class View  : public QGraphicsView
{
public:
	View(QWidget *parent = nullptr);
	~View();
private:
	QGraphicsScene* m_myScene;
};
