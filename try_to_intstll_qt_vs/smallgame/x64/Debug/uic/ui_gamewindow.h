/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindowClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GameWindowClass)
    {
        if (GameWindowClass->objectName().isEmpty())
            GameWindowClass->setObjectName(QString::fromUtf8("GameWindowClass"));
        GameWindowClass->resize(600, 400);
        centralWidget = new QWidget(GameWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        GameWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GameWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        GameWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GameWindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GameWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GameWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GameWindowClass->setStatusBar(statusBar);

        retranslateUi(GameWindowClass);

        QMetaObject::connectSlotsByName(GameWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindowClass)
    {
        GameWindowClass->setWindowTitle(QCoreApplication::translate("GameWindowClass", "GameWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWindowClass: public Ui_GameWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
