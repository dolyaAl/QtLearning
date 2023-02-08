#pragma once

#include <QtWidgets/QWidget>
#include "ui_widget.h"

class Widget : public QWidget
{
    Q_OBJECT
	Q_PROPERTY(int selectionStart READ selectionStart NOTIFY selectionChanged)
	Q_PROPERTY(int selectionEnd READ selectionEnd NOTIFY selectionChanged)
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    int selectionStart();
    int selectionEnd();
signals:
    void selectionChanged();
public slots:
    void addPoint(unsigned yVal);
    void clear();
protected:
    void paintEvent(QPaintEvent* event) override;
    void drawChart(QPainter* painter, const QRect& rect, const QRect& expRect);
    void drawSelection(QPainter* painter, const QRect& rect, const QRect& expRect);
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;

private:
    Ui::WidgetClass* ui = new Ui::WidgetClass;
    QVector<quint16> m_points;
    int m_selectionStart = -1;
    int m_selectionEnd = -1;
};
