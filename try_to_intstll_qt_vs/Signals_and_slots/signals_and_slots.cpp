#include "signals_and_slots.h"

Signals_and_slots::Signals_and_slots(QWidget *parent)
    : QMainWindow(parent)
{
    ui->setupUi(this);

    QPushButton* but1 = new QPushButton("1");
    QPushButton* but2 = new QPushButton("2");
    QPushButton* but3 = new QPushButton("3");
    QHBoxLayout* mainLay = new QHBoxLayout();

    mainLay->addWidget(but1);
    mainLay->addWidget(but2);
    mainLay->addWidget(but3);

    this->centralWidget()->setLayout(mainLay);

    connect(but1, &QPushButton::clicked, this, &Signals_and_slots::slotButton1);
    connect(but2, &QPushButton::clicked, this, &Signals_and_slots::slotButton2);
    connect(but3, &QPushButton::clicked, this, &Signals_and_slots::slotButton3);

    connect(this, &Signals_and_slots::signalFromButton, this, &Signals_and_slots::slotMessage);

}

Signals_and_slots::~Signals_and_slots()
{}

void Signals_and_slots::slotButton1()
{
    emit signalFromButton(1);
}

void Signals_and_slots::slotButton2()
{
    emit signalFromButton(2);
}

void Signals_and_slots::slotButton3()
{
    emit signalFromButton(3);
}

void Signals_and_slots::slotMessage(int button_ID)
{
    QMessageBox::information(this, "Pressed button", "Button ID:" + QString::number(button_ID));
}
