/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindowClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *search;
    QLabel *label;
    QTextEdit *result;
    QLineEdit *to;
    QLineEdit *from;
    QComboBox *vehicle;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainwindowClass)
    {
        if (mainwindowClass->objectName().isEmpty())
            mainwindowClass->setObjectName(QString::fromUtf8("mainwindowClass"));
        mainwindowClass->resize(600, 400);
        centralWidget = new QWidget(mainwindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        search = new QPushButton(centralWidget);
        search->setObjectName(QString::fromUtf8("search"));

        gridLayout->addWidget(search, 2, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        result = new QTextEdit(centralWidget);
        result->setObjectName(QString::fromUtf8("result"));

        gridLayout->addWidget(result, 4, 1, 1, 1);

        to = new QLineEdit(centralWidget);
        to->setObjectName(QString::fromUtf8("to"));

        gridLayout->addWidget(to, 1, 1, 1, 1);

        from = new QLineEdit(centralWidget);
        from->setObjectName(QString::fromUtf8("from"));

        gridLayout->addWidget(from, 0, 1, 1, 1);

        vehicle = new QComboBox(centralWidget);
        vehicle->addItem(QString());
        vehicle->addItem(QString());
        vehicle->addItem(QString());
        vehicle->setObjectName(QString::fromUtf8("vehicle"));

        gridLayout->addWidget(vehicle, 3, 1, 1, 1);

        mainwindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainwindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        mainwindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainwindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainwindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainwindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        mainwindowClass->setStatusBar(statusBar);

        retranslateUi(mainwindowClass);

        QMetaObject::connectSlotsByName(mainwindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindowClass)
    {
        mainwindowClass->setWindowTitle(QCoreApplication::translate("mainwindowClass", "Distance Matrix API", nullptr));
        label_2->setText(QCoreApplication::translate("mainwindowClass", "To: ", nullptr));
        search->setText(QCoreApplication::translate("mainwindowClass", "Send Request", nullptr));
        label->setText(QCoreApplication::translate("mainwindowClass", "From: ", nullptr));
        vehicle->setItemText(0, QCoreApplication::translate("mainwindowClass", "driving", nullptr));
        vehicle->setItemText(1, QCoreApplication::translate("mainwindowClass", "bicycle", nullptr));
        vehicle->setItemText(2, QCoreApplication::translate("mainwindowClass", "walk", nullptr));

    } // retranslateUi

};

namespace Ui {
    class mainwindowClass: public Ui_mainwindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
