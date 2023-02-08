#pragma once

#include <QtWidgets/QWidget>
#include <qgraphicsscene.h>
#include "triangle.h"
#include "ui_game.h"


class game : public QWidget
{
    Q_OBJECT

public:
    game(QWidget *parent = nullptr);
    ~game();

private:
    Ui::gameClass* ui;
    QGraphicsScene* scene;
    Triangle* triangle;
};
