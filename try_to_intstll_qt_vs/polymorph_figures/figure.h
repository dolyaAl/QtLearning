#pragma once

#include <QObject>
#include <QGraphicsItem>
#include <QDebug>

class Figure: public QObject, public QGraphicsItem
{
	Q_OBJECT
	Q_PROPERTY(QPointF startPoint
			   READ startPoint
			   WRITE setStartPoint
			   NOTIFY pointChanged)
	Q_PROPERTY(QPointF endPoint
			   READ endPoint
			   WRITE setEndPoint
			   NOTIFY pointChanged)
public:
	Figure(QPointF point, QObject* parent = nullptr);
	~Figure();

	QPointF startPoint() const;
	QPointF endPoint() const;

	void setStartPoint(const QPointF point);
	void setEndPoint(const QPointF point);

signals:
	void pointChanged();
private:
	QPointF m_startPoint;
	QPointF m_endPoint;
	QRectF boundingRect() const;
public slots:
	void updateRomb();

};

