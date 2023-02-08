#include "filedownload.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FileDownload w;
    w.show();
    return a.exec();
}
