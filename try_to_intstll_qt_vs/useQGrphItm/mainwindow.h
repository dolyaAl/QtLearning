#pragma once

#include <QtWidgets/QMainWindow>
#include <QGraphicsScene>
#include <QMessageBox>
#include "ui_mainwindow.h"
#include "myPoint.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindowClass ui;
    QGraphicsScene* scene;
    myPoint* point;
private slots:
    void slotFromPoint();
};
