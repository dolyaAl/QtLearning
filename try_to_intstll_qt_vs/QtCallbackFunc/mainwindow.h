#pragma once

#include <QtWidgets/QMainWindow>
#include <QGraphicsScene>
#include <QLineEdit>
#include "ui_mainwindow.h"
#include "square.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindowClass* ui;
    Square* square;
    static QLineEdit* line1;
    static QLineEdit* line2;
    QGraphicsScene* scene;

    static void getPosition(QPointF point);
    
};
