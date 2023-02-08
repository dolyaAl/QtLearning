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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tictactoewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *startNewGame;
    QAction *actionQuit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *player1Name;
    TicTacToeWidget *gameBoard;
    QLabel *player2Name;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(600, 400);
        startNewGame = new QAction(MainWindowClass);
        startNewGame->setObjectName(QString::fromUtf8("startNewGame"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icons/newgame.png"), QSize(), QIcon::Normal, QIcon::Off);
        startNewGame->setIcon(icon);
        actionQuit = new QAction(MainWindowClass);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/icons/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        player1Name = new QLabel(centralWidget);
        player1Name->setObjectName(QString::fromUtf8("player1Name"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(player1Name->sizePolicy().hasHeightForWidth());
        player1Name->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(player1Name);

        gameBoard = new TicTacToeWidget(centralWidget);
        gameBoard->setObjectName(QString::fromUtf8("gameBoard"));

        verticalLayout->addWidget(gameBoard);

        player2Name = new QLabel(centralWidget);
        player2Name->setObjectName(QString::fromUtf8("player2Name"));
        sizePolicy.setHeightForWidth(player2Name->sizePolicy().hasHeightForWidth());
        player2Name->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(player2Name);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menu_File->addAction(startNewGame);
        menu_File->addAction(actionQuit);
        mainToolBar->addAction(startNewGame);
        mainToolBar->addAction(actionQuit);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "MainWindow", nullptr));
        startNewGame->setText(QCoreApplication::translate("MainWindowClass", "NewGame", nullptr));
#if QT_CONFIG(tooltip)
        startNewGame->setToolTip(QCoreApplication::translate("MainWindowClass", "Start new game", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        startNewGame->setShortcut(QCoreApplication::translate("MainWindowClass", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindowClass", "Quit", nullptr));
#if QT_CONFIG(tooltip)
        actionQuit->setToolTip(QCoreApplication::translate("MainWindowClass", "quit", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindowClass", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        player1Name->setText(QCoreApplication::translate("MainWindowClass", "Player 1", nullptr));
        player2Name->setText(QCoreApplication::translate("MainWindowClass", "Player 2", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindowClass", "&File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
