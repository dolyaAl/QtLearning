/********************************************************************************
** Form generated from reading UI file 'configurationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATIONDIALOG_H
#define UI_CONFIGURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ConfigurationDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *player1Name;
    QLabel *label;
    QLineEdit *player2Name;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigurationDialog)
    {
        if (ConfigurationDialog->objectName().isEmpty())
            ConfigurationDialog->setObjectName(QString::fromUtf8("ConfigurationDialog"));
        ConfigurationDialog->resize(400, 300);
        gridLayout = new QGridLayout(ConfigurationDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(ConfigurationDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        player1Name = new QLineEdit(ConfigurationDialog);
        player1Name->setObjectName(QString::fromUtf8("player1Name"));

        gridLayout->addWidget(player1Name, 0, 1, 1, 1);

        label = new QLabel(ConfigurationDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        player2Name = new QLineEdit(ConfigurationDialog);
        player2Name->setObjectName(QString::fromUtf8("player2Name"));

        gridLayout->addWidget(player2Name, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ConfigurationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(player1Name);
        label->setBuddy(player2Name);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ConfigurationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ConfigurationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ConfigurationDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ConfigurationDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigurationDialog)
    {
        ConfigurationDialog->setWindowTitle(QCoreApplication::translate("ConfigurationDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigurationDialog", "Player &A Name", nullptr));
        label->setText(QCoreApplication::translate("ConfigurationDialog", "Player &B Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigurationDialog: public Ui_ConfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATIONDIALOG_H
