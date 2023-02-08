/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *redRadButton;
    QRadioButton *greenRadButton;
    QRadioButton *blueRadButton;

    void setupUi(QWidget *WindowClass)
    {
        if (WindowClass->objectName().isEmpty())
            WindowClass->setObjectName(QString::fromUtf8("WindowClass"));
        WindowClass->resize(600, 400);
        gridLayout = new QGridLayout(WindowClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(35, 112, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        groupBox = new QGroupBox(WindowClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        redRadButton = new QRadioButton(groupBox);
        redRadButton->setObjectName(QString::fromUtf8("redRadButton"));

        horizontalLayout->addWidget(redRadButton);

        greenRadButton = new QRadioButton(groupBox);
        greenRadButton->setObjectName(QString::fromUtf8("greenRadButton"));

        horizontalLayout->addWidget(greenRadButton);

        blueRadButton = new QRadioButton(groupBox);
        blueRadButton->setObjectName(QString::fromUtf8("blueRadButton"));

        horizontalLayout->addWidget(blueRadButton);


        verticalLayout->addWidget(groupBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(WindowClass);

        QMetaObject::connectSlotsByName(WindowClass);
    } // setupUi

    void retranslateUi(QWidget *WindowClass)
    {
        WindowClass->setWindowTitle(QCoreApplication::translate("WindowClass", "Window", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WindowClass", "GroupBox", nullptr));
        redRadButton->setText(QCoreApplication::translate("WindowClass", "red", nullptr));
        greenRadButton->setText(QCoreApplication::translate("WindowClass", "green", nullptr));
        blueRadButton->setText(QCoreApplication::translate("WindowClass", "blue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowClass: public Ui_WindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
