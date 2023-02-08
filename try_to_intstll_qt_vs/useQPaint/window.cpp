#include "window.h"
#include <QPainter>

Window::Window(QWidget *parent)
    : QWidget(parent)
{
    ui->setupUi(this);
}

Window::~Window()
{}

void Window::paintEvent(QPaintEvent * event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
    if (ui->redRadButton->isChecked())
    {
        painter.setBrush(QBrush(Qt::red, Qt::SolidPattern));
    }
    else if (ui->greenRadButton->isChecked())
    {
        painter.setBrush(QBrush(Qt::green, Qt::SolidPattern));
    }
    else if (ui->blueRadButton->isChecked())
    {
        painter.setBrush(QBrush(Qt::blue, Qt::SolidPattern));
    }
    else
    {
        painter.setBrush(QBrush(Qt::white, Qt::SolidPattern));
    }
    painter.drawEllipse(100, 50, 150, 150);
}

void Window::on_redRadButton_clicked()
{
    this->repaint();
}

void Window::on_greenRadButton_clicked()
{
    this->repaint();
}

void Window::on_blueRadButton_clicked()
{
    this->repaint();
}
