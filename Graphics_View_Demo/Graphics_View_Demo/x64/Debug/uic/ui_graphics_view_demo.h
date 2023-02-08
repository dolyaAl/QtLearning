/********************************************************************************
** Form generated from reading UI file 'graphics_view_demo.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICS_VIEW_DEMO_H
#define UI_GRAPHICS_VIEW_DEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Graphics_View_DemoClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Graphics_View_DemoClass)
    {
        if (Graphics_View_DemoClass->objectName().isEmpty())
            Graphics_View_DemoClass->setObjectName(QString::fromUtf8("Graphics_View_DemoClass"));
        Graphics_View_DemoClass->resize(600, 400);
        menuBar = new QMenuBar(Graphics_View_DemoClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Graphics_View_DemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Graphics_View_DemoClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Graphics_View_DemoClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Graphics_View_DemoClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Graphics_View_DemoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Graphics_View_DemoClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Graphics_View_DemoClass->setStatusBar(statusBar);

        retranslateUi(Graphics_View_DemoClass);

        QMetaObject::connectSlotsByName(Graphics_View_DemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *Graphics_View_DemoClass)
    {
        Graphics_View_DemoClass->setWindowTitle(QCoreApplication::translate("Graphics_View_DemoClass", "Graphics_View_Demo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graphics_View_DemoClass: public Ui_Graphics_View_DemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICS_VIEW_DEMO_H
