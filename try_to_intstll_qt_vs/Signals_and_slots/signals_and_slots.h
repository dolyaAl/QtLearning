#pragma once

#include <QtWidgets/QMainWindow>
#include <qpushbutton.h>
#include <qmessagebox.h>
#include <qlayout.h>
#include "ui_signals_and_slots.h"

class Signals_and_slots : public QMainWindow
{
    Q_OBJECT

public:
    Signals_and_slots(QWidget *parent = nullptr);
    ~Signals_and_slots();

signals:
    void signalFromButton(int button_ID);

private:
    Ui::Signals_and_slotsClass* ui;

private slots:
    void slotButton1();
    void slotButton2();
    void slotButton3();

    void slotMessage(int button_ID);
};
