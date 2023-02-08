/********************************************************************************
** Form generated from reading UI file 'signals_and_slots.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNALS_AND_SLOTS_H
#define UI_SIGNALS_AND_SLOTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signals_and_slotsClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Signals_and_slotsClass)
    {
        if (Signals_and_slotsClass->objectName().isEmpty())
            Signals_and_slotsClass->setObjectName(QString::fromUtf8("Signals_and_slotsClass"));
        Signals_and_slotsClass->resize(600, 400);
        menuBar = new QMenuBar(Signals_and_slotsClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Signals_and_slotsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Signals_and_slotsClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Signals_and_slotsClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Signals_and_slotsClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Signals_and_slotsClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Signals_and_slotsClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Signals_and_slotsClass->setStatusBar(statusBar);

        retranslateUi(Signals_and_slotsClass);

        QMetaObject::connectSlotsByName(Signals_and_slotsClass);
    } // setupUi

    void retranslateUi(QMainWindow *Signals_and_slotsClass)
    {
        Signals_and_slotsClass->setWindowTitle(QCoreApplication::translate("Signals_and_slotsClass", "Signals_and_slots", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signals_and_slotsClass: public Ui_Signals_and_slotsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNALS_AND_SLOTS_H
