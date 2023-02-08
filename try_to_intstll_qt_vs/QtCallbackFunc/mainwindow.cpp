#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui->setupUi(this);

    line1 = new QLineEdit();
    line2 = new QLineEdit();
    
    ui->horizontalLayout_2->addWidget(line1);
    ui->horizontalLayout_2->addWidget(line2);

    scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0, 0, 300, 300);
    square = new Square();
    square->setCallbackFunc(getPosition);
    square->setPos(100, 100);
    scene->addItem(square);
}

MainWindow::~MainWindow()
{}

void MainWindow::getPosition(QPointF point)
{
    line1->setText(QString::number(point.x()));
    line2->setText(QString::number(point.y()));
}

QLineEdit* MainWindow::line1;
QLineEdit* MainWindow::line2;