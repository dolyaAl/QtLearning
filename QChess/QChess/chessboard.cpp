#include "chessboard.h"

ChessBoard::ChessBoard(int ranks, int columns, QObject* parent) :
	QObject(parent),
	m_ranks(ranks),
	m_columns(columns)
{
	initBoard();
}

ChessBoard::~ChessBoard()
{
}

int ChessBoard::ranks() const
{
	return m_ranks;
}

int ChessBoard::columns() const
{
	return m_columns;
}

char ChessBoard::data(int rank, int column) const
{
	return m_boardData.at((rank - 1) * columns() + (column - 1));
}

bool ChessBoard::setDataInternal(int rank, int column, char value)
{
	int index = (rank - 1) * columns() + (column - 1);
	if(m_boardData.at(index) == value)
	{
		return false;
	}
	m_boardData[index] = value;
	return true;
}

void ChessBoard::setData(int rank, int column, char value)
{
	if(setDataInternal(rank, column, value))
	{
		emit dataChanged(rank, column);
	}
}

void ChessBoard::movePiece(int fromR, int fromC, int toR, int toC)
{
	setData(toR, toC, data(fromR, fromC));
	setData(fromR, fromC, ' ');
}

void ChessBoard::setFen(const QString& fen)
{
	int index = 0;
	int skip = 0;
	const int columnCount = columns();
	QChar ch;
	for (int rank = ranks(); rank > 0; --rank)
	{
		for (int column = 1; column <= columns(); ++column)
		{
			if(skip > 0)
			{
				ch = ' ';
				skip--;
			}
			else
			{
				ch = fen.at(index++);
				if(ch.isDigit())
				{
					skip = ch.toLatin1() - '0';
					ch = ' ';
					skip--;
				}
			}
			setDataInternal(rank, column, ch.toLatin1());
		}
		QChar next = fen.at(index++);
		if(next != '/' && next != ' ')
		{
			initBoard();
			return;
		}
	}
	emit boardReset();
}

void ChessBoard::setRanks(int value)
{
	if (ranks() == value)
	{
		return;
	}
	m_ranks = value;
	initBoard();
	emit ranksChanged(value);
}

void ChessBoard::setColumns(int value)
{
	if (columns() == value)
	{
		return;
	}
	m_columns = value;
	initBoard();
	emit columnsChanged(value);
}

void ChessBoard::initBoard()
{
	m_boardData.fill(' ', columns() * ranks());
	emit boardReset();
}
