#include "stdafx.h"
#include "adressbook.h"
#include "adddialog.h"

AdressBook::AdressBook(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

AdressBook::~AdressBook()
{}

void AdressBook::on_adressList_currentItemChanged()
{
    QListWidgetItem* curItem = ui.adressList->currentItem();
    if (curItem)
    {
        ui.nameLabel->setText("Name: " + curItem->text());
        ui.emailLabel->setText("Email: " + curItem->data(Qt::UserRole).toString());
    }
    else
    {
        ui.nameLabel->setText("<No item selected>");
        ui.emailLabel->clear();
    }
}

void AdressBook::on_deleteButton_clicked()
{
    QListWidgetItem* curItem = ui.adressList->takeItem(ui.adressList->row(ui.adressList->currentItem()));
    delete curItem;
    if (ui.adressList->count() > 0)
    {
        ui.adressList->setCurrentRow(0);
    }
    else
    {
        on_adressList_currentItemChanged();
    }
}

void AdressBook::on_addButton_clicked()
{
    AddDialog dialog(this);
    if (dialog.exec())
    {
        QString name = dialog.nameEdit->text();
        QString email = dialog.emailEdit->text();
        if (!name.isEmpty() && !email.isEmpty())
        {
            QListWidgetItem *item = new QListWidgetItem(name, ui.adressList);
            item->setData(Qt::UserRole, email);
            ui.adressList->setCurrentItem(item);
        }
    }
}
