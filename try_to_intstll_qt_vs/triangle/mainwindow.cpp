#include "mainwindow.h"
#include "triangle.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui->setupUi(this);
    this->resize(600, 600);
    this->setFixedSize(600, 600);

    scene = new QGraphicsScene();
    trngl = new triangle();

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    scene->setSceneRect(-250, -250, 500, 500);

    scene->addLine(-250, 0, 250, 0, QPen(Qt::black));
    scene->addLine(0, -250, 0, 250, QPen(Qt::black));

    scene->addItem(trngl);
    trngl->setPos(0, 0);
}

MainWindow::~MainWindow()
{
}
