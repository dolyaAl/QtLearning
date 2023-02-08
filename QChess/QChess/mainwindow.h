#pragma once

#include <QtWidgets/QMainWindow>

#include "chessalgorithm.h"
#include "chessview.h"
#include "ui_mainwindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void viewClicked(const QPoint& field);

private:
    void initPieces();

    Ui::MainWindowClass* ui = new Ui::MainWindowClass;
    ChessView* m_view;
    ChessAlgorithm* m_algorithm;
    QPoint m_clickedPoint;
    ChessView::FieldHightlight* m_selectedField;
};
