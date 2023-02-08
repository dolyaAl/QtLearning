#include "mainwindow.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui->setupUi(this);
    connect(ui->startNewGame, &QAction::triggered, this, &MainWindow::startNewGame);
    connect(ui->actionQuit, &QAction::triggered, qApp, &QApplication::quit);
    connect(ui->gameBoard, &TicTacToeWidget::currentPlayerChanged, this, &MainWindow::updateNameLabels);
    connect(ui->gameBoard, &TicTacToeWidget::gameOver, this, &MainWindow::handleGameOver);
    ConfigurationDialog conf;
}

MainWindow::~MainWindow()
{

}

void MainWindow::setLabelBold(QLabel* label, bool isBold)
{
    QFont f = label->font();
    f.setBold(isBold);
    label->setFont(f);
}

void MainWindow::updateNameLabels()
{
    setLabelBold(ui->player1Name, ui->gameBoard->currentPlayer() == TicTacToeWidget::Player::Player1);
    setLabelBold(ui->player2Name, ui->gameBoard->currentPlayer() == TicTacToeWidget::Player::Player2);
}

void MainWindow::handleGameOver(TicTacToeWidget::Player winner)
{
    QString message;
    if (winner == TicTacToeWidget::Player::Draw)
    {
        message = tr("Game ended with a draw");
    }
    else
    {
        QString winnerName = winner == TicTacToeWidget::Player::Player1 ? 
                                ui->player1Name->text() : ui->player2Name->text();
        message = tr("%1 winner").arg(winnerName);
    }
    QMessageBox::information(this, tr("Info"), message);
}

void MainWindow::startNewGame()
{
    qDebug() << "button clicked!";
    ConfigurationDialog conf(this);
    if (conf.exec() == QDialog::Rejected)
    {
        return;
    }
    ui->player1Name->setText(conf.player1Name());
    ui->player2Name->setText(conf.player2Name());
    ui->gameBoard->initNewGame();
}
