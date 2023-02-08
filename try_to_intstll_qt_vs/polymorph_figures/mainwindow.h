#pragma once

#include <QtWidgets/QMainWindow>
#include <QResizeEvent>
#include "ui_mainwindow.h"
#include "paintscene.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindowClass* ui;
    PaintScene* scene;
private:
    void resizeEvent(QResizeEvent* event);
private slots:
    void on_rombButton_clicked();
    void on_squareButton_clicked();
    void on_triangleButton_clicked();
};
