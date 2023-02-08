#include "foxandhounds.h"

FoxAndHounds::FoxAndHounds(QObject* parent):ChessAlgorithm(parent), m_fox({})
{
}

void FoxAndHounds::newGame()
{
	setupBoard();
	board()->setFen("3p4/8/8/8/8/8/8/P1P1P1P1 w");
	m_fox = QPoint(5, 8);
	setResult(NoResult);
	setCurrentPlayer(Player1);
}

bool FoxAndHounds::move(int fromR, int fromC, int toR, int toC)
{
	if(currentPlayer() == NoPlayer)
	{
		return false;
	}
	const char source = board()->data(fromR, fromC);
	if(currentPlayer() == Player1 && source != 'P')
	{
		return false;
	}
	if(currentPlayer() == Player2 && source != 'p')
	{
		return false;
	}
	if(toC != fromC + 1 && toC != fromC - 1)
	{
		return false;
	}
	if(toC < 1 || toC > board()->columns())
	{
		return false;
	}
	if(toR < 1 || toR > board()->ranks())
	{
		return false;
	}
	if((toC + toR)%2)
	{
		return false;
	}
	if(board()->data(toR, toC) != ' ')
	{
		return false;
	}
	if(currentPlayer() == Player1 && toR <= fromR)
	{
		return false;
	}
	board()->movePiece(fromR, fromC, toR, toC);
	if(currentPlayer() == Player2)
	{
		m_fox = QPoint(toC, toR);
	}
	if(currentPlayer() == Player2 && toR == 1)
	{
		setResult(Player2Wins);
	}
	else if(currentPlayer() == Player1 && !foxCanMove())
	{
		setResult(Player1Wins);
	}
	else 
	{
		setCurrentPlayer(currentPlayer() == Player1 ? Player2 : Player1);
	}
	return true;
}

bool FoxAndHounds::emptyByOffset(int x, int y) const
{
	const int destinationColumn = m_fox.x() + x;
	const int destinationRank = m_fox.y() + y;
	if (destinationColumn < 1 ||
		destinationRank < 1 ||
		destinationColumn > board()->columns() ||
		destinationRank > board()->ranks())
	{
		return false;
	}
	return (board()->data(destinationRank, destinationColumn) == ' ');
}

bool FoxAndHounds::foxCanMove() const
{
	if(emptyByOffset(-1, -1) || emptyByOffset(-1, 1) || emptyByOffset(1, -1) || emptyByOffset(1, 1))
	{
		return true;
	}
	return false;
}
