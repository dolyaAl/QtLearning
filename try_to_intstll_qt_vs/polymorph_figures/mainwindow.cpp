#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui->setupUi(this);

    scene = new PaintScene();
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

MainWindow::~MainWindow()
{
}

void MainWindow::resizeEvent(QResizeEvent * event)
{
    scene->setSceneRect(0, 0, ui->graphicsView->width() - 20, ui->graphicsView->height() - 20);
    QMainWindow::resizeEvent(event);
}

void MainWindow::on_rombButton_clicked()
{
    scene->setTypeFigure(PaintScene::RombType);
}

void MainWindow::on_squareButton_clicked()
{
    scene->setTypeFigure(PaintScene::SquareType);
}

void MainWindow::on_triangleButton_clicked()
{
    scene->setTypeFigure(PaintScene::TriangleType);
}
