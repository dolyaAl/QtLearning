#pragma once

#include <QtWidgets/QWidget>
#include "ui_window.h"

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    ~Window();
protected:
    void paintEvent(QPaintEvent* event);
private slots:
    void on_redRadButton_clicked();
    void on_greenRadButton_clicked();
    void on_blueRadButton_clicked();
private:
    Ui::WindowClass* ui;

};
