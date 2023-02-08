#include <QtWidgets/QApplication>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>

QGraphicsRectItem* complexRectItem(qreal width, qreal height, qreal radius)
{
    QRectF rect(-width / 2, -height / 2, width, height);
    rect.translate(0.5, 0.5);
    QGraphicsRectItem* parent = new QGraphicsRectItem(rect);
    QRectF circleBoundary(-radius, -radius, 2 * radius, 2 * radius);
    for (int i = 0; i < 4; ++i)
    {
        QGraphicsEllipseItem* child = new QGraphicsEllipseItem(circleBoundary, parent);
        child->setBrush(Qt::black);
        QPointF pos;
        switch (i)
        {
        case 0:
            pos = rect.bottomLeft();
            break;
        case 1:
            pos = rect.bottomRight();
            break;
        case 2:
            pos = rect.topLeft();
            break;
        case 3:
            pos = rect.topRight();
            break;
        }
        child->setPos(pos);
        QGraphicsSimpleTextItem* text = new QGraphicsSimpleTextItem(QString::number(i));
        QRectF textRect = text->boundingRect(); 
        textRect.translate(-textRect.center()); 
        QGraphicsRectItem* rectItem = new QGraphicsRectItem(textRect, child); 
        rectItem->setPen(QPen(Qt::NoPen)); 
        rectItem->setFlag(QGraphicsItem::ItemIgnoresTransformations); 
        text->setParentItem(rectItem); 
        text->setPos(textRect.topLeft());
        text->setBrush(Qt::green);
    }
    return parent;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); 
    QGraphicsScene scene; 
    QGraphicsRectItem* item1 = complexRectItem(100, 60, 8);
    scene.addItem(item1);
    QGraphicsRectItem* item2 = complexRectItem(100, 60, 8);
    scene.addItem(item2);

    item2->setPos(200, 0); 
    item2->setRotation(20);

    /*QRect rect = scene.sceneRect().toAlignedRect();
    QImage image(rect.size(), QImage::Format_ARGB32); 
    image.fill(Qt::transparent); 
    QPainter painter(&image); 
    scene.render(&painter);
    image.save("scene.png");*/

    QGraphicsView view(&scene);
    view.setRenderHint(QPainter::RenderHint::Antialiasing);
    view.scale(4, 4);
    view.show();
    return a.exec();
}
