#include "configurationdialog.h"
#include "ui_configurationdialog.h"

ConfigurationDialog::ConfigurationDialog(QWidget *parent) : QDialog(parent), ui(new Ui::ConfigurationDialog)
{
    ui->setupUi(this);
    connect(ui->player1Name, &QLineEdit::textChanged, this, &ConfigurationDialog::updateOKButtonState);
    connect(ui->player2Name, &QLineEdit::textChanged, this, &ConfigurationDialog::updateOKButtonState);
    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
}

ConfigurationDialog::~ConfigurationDialog()
{
    delete ui;
}

void ConfigurationDialog::setPlayer1Name(const QString& name)
{
    ui->player1Name->setText(name);
}

void ConfigurationDialog::setPlayer2Name(const QString& name)
{
    ui->player1Name->setText(name);
}

QString ConfigurationDialog::player1Name() const
{
    return ui->player1Name->text();
}

QString ConfigurationDialog::player2Name() const
{
    return ui->player2Name->text();
}

void ConfigurationDialog::updateOKButtonState()
{
    QPushButton* okButton = ui->buttonBox->button(QDialogButtonBox::Ok);
    okButton->setEnabled(!ui->player1Name->text().isEmpty() && !ui->player2Name->text().isEmpty());
}
