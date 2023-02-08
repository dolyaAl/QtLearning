/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameClass
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QWidget *gameClass)
    {
        if (gameClass->objectName().isEmpty())
            gameClass->setObjectName(QString::fromUtf8("gameClass"));
        gameClass->resize(600, 400);
        graphicsView = new QGraphicsView(gameClass);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(5, 10, 591, 381));

        retranslateUi(gameClass);

        QMetaObject::connectSlotsByName(gameClass);
    } // setupUi

    void retranslateUi(QWidget *gameClass)
    {
        gameClass->setWindowTitle(QCoreApplication::translate("gameClass", "game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameClass: public Ui_gameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
