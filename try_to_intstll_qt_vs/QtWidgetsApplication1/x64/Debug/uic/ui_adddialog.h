/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddDialogClass
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *nameText;
    QLineEdit *nameEdit;
    QLabel *emailText;
    QLineEdit *emailEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *AddDialogClass)
    {
        if (AddDialogClass->objectName().isEmpty())
            AddDialogClass->setObjectName(QString::fromUtf8("AddDialogClass"));
        AddDialogClass->resize(600, 400);
        widget = new QWidget(AddDialogClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(140, 130, 321, 151));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nameText = new QLabel(widget);
        nameText->setObjectName(QString::fromUtf8("nameText"));

        gridLayout->addWidget(nameText, 0, 0, 1, 1);

        nameEdit = new QLineEdit(widget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        emailText = new QLabel(widget);
        emailText->setObjectName(QString::fromUtf8("emailText"));

        gridLayout->addWidget(emailText, 1, 0, 1, 1);

        emailEdit = new QLineEdit(widget);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));

        gridLayout->addWidget(emailEdit, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(348, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(widget);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(AddDialogClass);
        QObject::connect(okButton, &QPushButton::clicked, AddDialogClass, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(AddDialogClass);
    } // setupUi

    void retranslateUi(QDialog *AddDialogClass)
    {
        AddDialogClass->setWindowTitle(QCoreApplication::translate("AddDialogClass", "Add Adress", nullptr));
        nameText->setText(QCoreApplication::translate("AddDialogClass", "Name:", nullptr));
        emailText->setText(QCoreApplication::translate("AddDialogClass", "Email:", nullptr));
        okButton->setText(QCoreApplication::translate("AddDialogClass", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDialogClass: public Ui_AddDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
