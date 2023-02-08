#pragma once

#include <QtWidgets/QWidget>
#include "ui_adressbook.h"

class AdressBook : public QWidget
{
    Q_OBJECT

public:
    AdressBook(QWidget *parent = nullptr);
    ~AdressBook();

private:
    Ui::AdressBookClass ui;

private slots:
    void on_addButton_clicked();
    void on_adressList_currentItemChanged();
    void on_deleteButton_clicked();
};
