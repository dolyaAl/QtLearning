#include "widget.h"
#include <QMouseEvent>
#include <QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    ui->setupUi(this);
}

Widget::~Widget()
{}

int Widget::selectionStart()
{
    return m_selectionStart;
}

int Widget::selectionEnd()
{
    return m_selectionEnd;
}

void Widget::addPoint(unsigned yVal)
{
    m_points << qMax(0u, yVal);
    update();
}

void Widget::clear()
{
    m_points.clear();
    update();
}

void Widget::paintEvent(QPaintEvent* event)
{
    QRect exposedRect = event->rect();
    QPainter painter(this);
    painter.setRenderHint(QPainter::RenderHint::Antialiasing);
    QPen pen(Qt::black);
    pen.setWidth(4);
    painter.setPen(pen);
    QRect r = rect().adjusted(10, 10, -10, -10);
    painter.drawRoundedRect(r, 20, 10);
    painter.save();
    r.adjust(2, 2, -2, -2);
    painter.setViewport(r);
    r.moveTo(0, -r.height() / 2);
    painter.setWindow(r);
    drawSelection(&painter, r, exposedRect);
    drawChart(&painter, r, exposedRect);
    painter.restore();
}

void Widget::drawChart(QPainter* painter, const QRect& rect, const QRect& expRect)
{
    painter->setPen(Qt::red);
    painter->drawLine(0, 0, rect.width(), 0);
    painter->save();
    painter->setRenderHint(QPainter::Antialiasing, false);
    const int lastPoint = qMin(m_points.size(), expRect.right() + 1);
    for(int i = expRect.left(); i < lastPoint; ++i)
    {
        if(i >= m_selectionStart && i <= m_selectionEnd)
        {
			painter->setPen(Qt::white);
        }
        else
        {
			painter->setPen(Qt::blue);
        }
        painter->drawLine(i, -m_points.at(i), i, m_points.at(i));
    }
    painter->restore();
    Q_UNUSED(rect)
}

void Widget::drawSelection(QPainter* painter, const QRect& rect, const QRect& expRect)
{
    if(m_selectionStart < 0)
    {
        return;
    }
    painter->save();
    painter->setPen(Qt::NoPen);
    painter->setBrush(palette().highlight());
    QRect selectRect = rect;
    selectRect.setLeft(m_selectionStart);
    selectRect.setRight(m_selectionEnd);
    painter->drawRect(selectRect.intersected(expRect));
    painter->restore();
}

void Widget::mousePressEvent(QMouseEvent* event)
{
    m_selectionStart = m_selectionEnd = event->pos().x() - 12;
    emit selectionChanged();
    update();
}

void Widget::mouseMoveEvent(QMouseEvent* event)
{
    m_selectionEnd = event->pos().x() - 12;
    emit selectionChanged();
    update();
}
