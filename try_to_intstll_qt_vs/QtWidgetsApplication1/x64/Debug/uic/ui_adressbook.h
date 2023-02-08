/********************************************************************************
** Form generated from reading UI file 'adressbook.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADRESSBOOK_H
#define UI_ADRESSBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdressBookClass
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QListWidget *adressList;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QSpacerItem *verticalSpacer;
    QLabel *nameLabel;
    QLabel *emailLabel;

    void setupUi(QWidget *AdressBookClass)
    {
        if (AdressBookClass->objectName().isEmpty())
            AdressBookClass->setObjectName(QString::fromUtf8("AdressBookClass"));
        AdressBookClass->resize(688, 400);
        widget = new QWidget(AdressBookClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 641, 326));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        adressList = new QListWidget(widget);
        adressList->setObjectName(QString::fromUtf8("adressList"));

        gridLayout->addWidget(adressList, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addButton = new QPushButton(widget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout->addWidget(addButton);

        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        verticalLayout->addWidget(deleteButton);

        verticalSpacer = new QSpacerItem(68, 218, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 1, 0, 1, 2);

        emailLabel = new QLabel(widget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        gridLayout->addWidget(emailLabel, 2, 0, 1, 2);


        retranslateUi(AdressBookClass);

        QMetaObject::connectSlotsByName(AdressBookClass);
    } // setupUi

    void retranslateUi(QWidget *AdressBookClass)
    {
        AdressBookClass->setWindowTitle(QCoreApplication::translate("AdressBookClass", "AdressBook", nullptr));
        addButton->setText(QCoreApplication::translate("AdressBookClass", "Add", nullptr));
        deleteButton->setText(QCoreApplication::translate("AdressBookClass", "Delete", nullptr));
        nameLabel->setText(QCoreApplication::translate("AdressBookClass", "<No item selected>", nullptr));
        emailLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdressBookClass: public Ui_AdressBookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADRESSBOOK_H
