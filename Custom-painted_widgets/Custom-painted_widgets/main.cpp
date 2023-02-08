#include "widget.h"
#include <QtWidgets/QApplication>
#include <QRandomGenerator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    for (int i = 0; i < 450; ++i)
    {
        w.addPoint(QRandomGenerator::global()->bounded(0, 120));
    }
    w.show();
    return a.exec();
}
