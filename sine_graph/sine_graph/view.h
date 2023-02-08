#pragma once

#include <QGraphicsView>
#include <QWheelEvent>
#include <QMouseEvent>
#include "ui_view.h"
#include "sineitem.h"

class View : public QGraphicsView
{
	Q_OBJECT

public:
	View(QWidget *parent = nullptr);
	~View();

private:
	Ui::ViewClass* ui = new Ui::ViewClass;
	void wheelEvent(QWheelEvent* event) override;
	void mousePressEvent(QMouseEvent* event) override;
};
