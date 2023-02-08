#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include "configurationdialog.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void setLabelBold(QLabel* label, bool isBold);
    Ui::MainWindowClass* ui = new Ui::MainWindowClass;

private slots:
    void startNewGame();
    void updateNameLabels();
    void handleGameOver(TicTacToeWidget::Player winner);
    
};
