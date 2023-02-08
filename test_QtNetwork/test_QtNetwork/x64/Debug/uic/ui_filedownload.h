/********************************************************************************
** Form generated from reading UI file 'filedownload.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEDOWNLOAD_H
#define UI_FILEDOWNLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileDownloadClass
{
public:
    QGridLayout *gridLayout;

    void setupUi(QWidget *FileDownloadClass)
    {
        if (FileDownloadClass->objectName().isEmpty())
            FileDownloadClass->setObjectName(QString::fromUtf8("FileDownloadClass"));
        FileDownloadClass->resize(600, 400);
        gridLayout = new QGridLayout(FileDownloadClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        retranslateUi(FileDownloadClass);

        QMetaObject::connectSlotsByName(FileDownloadClass);
    } // setupUi

    void retranslateUi(QWidget *FileDownloadClass)
    {
        FileDownloadClass->setWindowTitle(QCoreApplication::translate("FileDownloadClass", "FileDownload", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileDownloadClass: public Ui_FileDownloadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEDOWNLOAD_H
