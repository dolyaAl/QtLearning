#pragma once

#include <QtWidgets/QMainWindow>
#include <QGraphicsScene>
#include "ui_mainwindow.h"
#include "triangle.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindowClass* ui;
    QGraphicsScene* scene;
    triangle* trngl;
};
