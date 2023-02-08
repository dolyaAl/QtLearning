#include "signals_and_slots.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Signals_and_slots w;
    w.show();
    return a.exec();
}
