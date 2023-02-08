#pragma once
#include <QGraphicsPixmapItem>
class BackgroundItem : public QGraphicsPixmapItem
{
public:
	explicit BackgroundItem(QPixmap pixmap, QGraphicsItem* parent = nullptr);
	~BackgroundItem();

	QPainterPath shape() const override;
};

