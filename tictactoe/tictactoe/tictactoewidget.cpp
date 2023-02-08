#include "tictactoewidget.h"
#include <QtWidgets/QGridLayout>
#include <QSignalMapper>

TicTacToeWidget::TicTacToeWidget(QWidget* parent) : QWidget(parent)
{
	m_currentPlayer = Player::Invalid;
	QGridLayout* gridLayout = new QGridLayout(this);
	for (int row = 0; row < 3; ++row)
	{
		for (int column = 0; column < 3; ++column)
		{
			QPushButton* button = new QPushButton(" ");
			button->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
			gridLayout->addWidget(button, row, column);
			m_board.push_back(button);
			connect(button, &QPushButton::clicked, [this, row, column]() {handleButtonClick(row*3 + column); });
		}
	}
}

TicTacToeWidget::~TicTacToeWidget()
{
}

void TicTacToeWidget::initNewGame()
{
	for (QPushButton* button : m_board)
	{
		button->setText(" ");
	}
	setCurrentPlayer(Player::Player1);
}

void TicTacToeWidget::handleButtonClick(int index)
{
	if (m_currentPlayer == Player::Invalid)
	{
		return;
	}
	if (index < 0 || index >= m_board.size())
	{
		return;
	}
	QPushButton* button = m_board[index];
	if (button->text() != " ")
	{
		return;
	}
	button->setText(m_currentPlayer == Player::Player1 ? "X" : "O");
	Player winner = checkWinCondition();
	if (winner == Player::Invalid)
	{
		setCurrentPlayer(m_currentPlayer == Player::Player1 ? Player::Player2 : Player::Player1);
		return;
	}
	else
	{
		emit gameOver(winner);
	}
}
