#include "backgrounditem.h"
#include <QPainter>

/**
 * \brief 
 * \param pixmap background image
 * \param parent parent item
 */
BackgroundItem::BackgroundItem(const QPixmap pixmap, QGraphicsItem* parent):
	QGraphicsPixmapItem(parent)
{
	setPixmap(pixmap);
	//setOffset(-pixmap.width() / 2, -pixmap.height() / 2);
}

BackgroundItem::~BackgroundItem()
= default;

QPainterPath BackgroundItem::shape() const
{
	return {};
}
