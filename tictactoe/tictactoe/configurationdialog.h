#pragma once
#include <QDialog>
#include <QPushButton>

namespace Ui {
class ConfigurationDialog;
}

class ConfigurationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigurationDialog(QWidget *parent = nullptr);
    ~ConfigurationDialog();

    void setPlayer1Name(const QString& name);
    void setPlayer2Name(const QString& name);

    QString player1Name() const;
    QString player2Name() const;
private slots:
    void updateOKButtonState();

private:
    Ui::ConfigurationDialog *ui;
};
