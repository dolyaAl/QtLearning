/********************************************************************************
** Form generated from reading UI file 'tcpclient.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpClientClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *disconnect;
    QLineEdit *address;
    QPushButton *connect;
    QLineEdit *user;
    QPlainTextEdit *chat;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *text;
    QLabel *label_4;
    QSpinBox *port;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TcpClientClass)
    {
        if (TcpClientClass->objectName().isEmpty())
            TcpClientClass->setObjectName(QString::fromUtf8("TcpClientClass"));
        TcpClientClass->resize(600, 400);
        centralWidget = new QWidget(TcpClientClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        disconnect = new QPushButton(centralWidget);
        disconnect->setObjectName(QString::fromUtf8("disconnect"));

        gridLayout->addWidget(disconnect, 3, 2, 1, 1);

        address = new QLineEdit(centralWidget);
        address->setObjectName(QString::fromUtf8("address"));

        gridLayout->addWidget(address, 0, 1, 1, 1);

        connect = new QPushButton(centralWidget);
        connect->setObjectName(QString::fromUtf8("connect"));

        gridLayout->addWidget(connect, 3, 1, 1, 1);

        user = new QLineEdit(centralWidget);
        user->setObjectName(QString::fromUtf8("user"));

        gridLayout->addWidget(user, 2, 1, 1, 1);

        chat = new QPlainTextEdit(centralWidget);
        chat->setObjectName(QString::fromUtf8("chat"));

        gridLayout->addWidget(chat, 4, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        text = new QLineEdit(centralWidget);
        text->setObjectName(QString::fromUtf8("text"));

        gridLayout->addWidget(text, 6, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        port = new QSpinBox(centralWidget);
        port->setObjectName(QString::fromUtf8("port"));
        port->setMaximum(100000);

        gridLayout->addWidget(port, 1, 1, 1, 1);

        TcpClientClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TcpClientClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        TcpClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TcpClientClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TcpClientClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TcpClientClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TcpClientClass->setStatusBar(statusBar);

        retranslateUi(TcpClientClass);

        QMetaObject::connectSlotsByName(TcpClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *TcpClientClass)
    {
        TcpClientClass->setWindowTitle(QCoreApplication::translate("TcpClientClass", "TcpClient", nullptr));
        disconnect->setText(QCoreApplication::translate("TcpClientClass", "disconnect", nullptr));
        connect->setText(QCoreApplication::translate("TcpClientClass", "connect", nullptr));
        label_2->setText(QCoreApplication::translate("TcpClientClass", "Port", nullptr));
        label->setText(QCoreApplication::translate("TcpClientClass", "Address", nullptr));
        label_3->setText(QCoreApplication::translate("TcpClientClass", "User", nullptr));
        label_4->setText(QCoreApplication::translate("TcpClientClass", "Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpClientClass: public Ui_TcpClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
