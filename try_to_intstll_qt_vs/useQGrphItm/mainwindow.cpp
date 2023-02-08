#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    scene = new QGraphicsScene();
    point = new myPoint();

    connect(point,&myPoint::signal1,this, &MainWindow::slotFromPoint);

    ui.graphicsView->setScene(scene);

    scene->addItem(point);
}

void MainWindow::slotFromPoint()
{
    QMessageBox::information(this, "Click", "You clicked\npoint");
}

MainWindow::~MainWindow()
{}
