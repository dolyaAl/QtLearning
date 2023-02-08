#pragma once
#include <QObject>

class ChessBoard: public QObject
{
	Q_OBJECT
		Q_PROPERTY(int ranks READ ranks NOTIFY ranksChanged)
		Q_PROPERTY(int columns READ columns NOTIFY columnsChanged)
public:
	ChessBoard(int ranks, int columns, QObject* parent = nullptr);
	~ChessBoard();

	int ranks() const;
	int columns() const;
	char data(int rank, int column) const;
	void setData(int rank, int column, char value);
	void movePiece(int fromR, int fromC, int toR, int toC);
	void setFen(const QString& fen);
protected:
	void setRanks(int value);
	void setColumns(int value);
	void initBoard();
	bool setDataInternal(int rank, int column, char value);
signals:
	void ranksChanged(int);
	void columnsChanged(int);
	void dataChanged(int r, int c);
	void boardReset();
private:
	int m_ranks;
	int m_columns;
	QVector<char> m_boardData;
};

