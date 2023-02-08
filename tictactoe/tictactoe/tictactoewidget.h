#pragma once
#include <QWidget>
#include <QPushButton>
#include <QString>
class TicTacToeWidget : public QWidget
{
	Q_OBJECT
public:
	TicTacToeWidget(QWidget* parent = nullptr);
	~TicTacToeWidget();
	enum class Player
	{
		Invalid, Player1, Player2, Draw
	};
	Q_ENUM(Player)
	Player currentPlayer() const
	{
		return m_currentPlayer;
	}
	void setCurrentPlayer(Player player)
	{
		if (m_currentPlayer == player)
		{
			return;
		}
		m_currentPlayer = player;
		emit currentPlayerChanged(player);
	}
	Player checkWinCondition()
	{
		for (int i = 0, row = 0, column = 0; i < 3; ++i, row = i, column = i)
		{
			if (m_board[row * 3]->text() == " ")
			{
				continue;
			}
			else if (m_board[row * 3]->text() == m_board[row * 3 + 1]->text() && //check rows
				m_board[row * 3]->text() == m_board[row * 3 + 2]->text())
			{
				return m_board[row * 3]->text() == "X" ? Player::Player1 : Player::Player2;
			}

			if (m_board[column]->text() == " ")
			{
				continue;
			}
			else if (m_board[column]->text() == m_board[column + 1 * 3]->text() && //chek columns
				m_board[column]->text() == m_board[column + 2 * 6]->text())
			{
				return m_board[column]->text() == "X" ? Player::Player1 : Player::Player2;
			}
		}
		if (m_board[0]->text() != " " && m_board[0]->text() == m_board[4]->text() && m_board[0]->text() == m_board[8]->text())
		{
			return m_board[0]->text() == "X" ? Player::Player1 : Player::Player2;
		}
		if (m_board[2]->text() != " " && m_board[2]->text() == m_board[4]->text() && m_board[2]->text() == m_board[6]->text())
		{
			return m_board[0]->text() == "X" ? Player::Player1 : Player::Player2;
		}
		return Player::Invalid;
	}
	void initNewGame();
signals:
	void currentPlayerChanged(Player);
	void gameOver(Player);
private slots:
	void handleButtonClick(int index);
private:
	QVector<QPushButton*> m_board;
	Player m_currentPlayer;
};

