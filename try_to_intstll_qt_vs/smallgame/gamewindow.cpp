#include "gamewindow.h"

GameWindow::GameWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui->setupUi(this);
    this->resize(600, 600);
    this->setFixedSize(600, 600);
    scene = new Scene();

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setSceneRect(-250, -250, 500, 500);

    scene->addRect(-250, -270, 500, 20, Qt::NoPen, Qt::darkGray);
    scene->addRect(-250, 250, 500, 20, Qt::NoPen, Qt::darkGray);
    scene->addRect(-270, -250, 20, 500, Qt::NoPen, Qt::darkGray);
    scene->addRect(250, -250, 20, 500, Qt::NoPen, Qt::darkGray);

    QCursor cursor = QCursor(QPixmap(":/GameWindow/cursor/Artboard1.png"));
    ui->graphicsView->setCursor(cursor);
    gmObj = new GameObject();
    gmObj->setPos(0, 0);
    scene->addItem(gmObj);
    ui->graphicsView->setMouseTracking(true);

    targTimer = new QTimer();

    connect(scene, &Scene::signalTargetCoordinate, gmObj, &GameObject::slotTarget);
    connect(scene, &Scene::signalShot, gmObj, &GameObject::slotShot);
    connect(gmObj, &GameObject::signalBullet, this, &GameWindow::slotBullet);
    connect(targTimer, &QTimer::timeout, this, &GameWindow::slotCreateTarget);
    targTimer->start(1500);

}

GameWindow::~GameWindow()
{}

void GameWindow::funcHitTarget(QGraphicsItem * item)
{
    for (auto targ : targets)
    {
        if (targ == item)
        {
            Target* t = qgraphicsitem_cast<Target*>(item);
            t->hit(QRandomGenerator::global()->bounded(1, 3));
        }
    }
}

void GameWindow::slotCreateTarget()
{
    Target* targ = new Target();
    scene->addItem(targ);
    targ->setPos(QRandomGenerator::global()->bounded(-200, 200), QRandomGenerator::global()->bounded(-200, 200));
    targets.append(targ);
}

void GameWindow::slotBullet(QPointF start, QPointF end)
{
    Bullet* bul = new Bullet(gmObj, start, end);
    bul->setCallBackFunc(funcHitTarget);
    scene->addItem(bul);
}

QList<QGraphicsItem*> GameWindow::targets;