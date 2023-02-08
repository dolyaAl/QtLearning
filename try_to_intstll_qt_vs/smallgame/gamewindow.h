#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_gamewindow.h"
#include "scene.h"
#include "GameObject.h"
#include "bullet.h"
#include "target.h"

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

private:
    Ui::GameWindowClass* ui = new Ui::GameWindowClass;
    Scene* scene;
    GameObject* gmObj;
    QTimer* targTimer;
    static QList<QGraphicsItem*> targets;
    static void funcHitTarget(QGraphicsItem* item);

private slots:
    void slotBullet(QPointF start, QPointF end);
    void slotCreateTarget();

};
