#pragma once
#include <QObject>
#include "chessboard.h"

class ChessAlgorithm: public QObject
{
	Q_OBJECT
	Q_PROPERTY(Result result READ result)
	Q_PROPERTY(Player currentPlayer
		READ currentPlayer
		NOTIFY currentPlayerChanged)
public:
	enum Result {NoResult, Player1Wins, Draw, Player2Wins};
	Q_ENUM(Result)
	enum Player {NoPlayer, Player1, Player2};
	Q_ENUM(Player)

	ChessAlgorithm(QObject* parent = nullptr);
	~ChessAlgorithm();

	inline Result result() const;
	inline Player currentPlayer() const;
	ChessBoard* board() const;
public slots:
	virtual void newGame();
	virtual bool move(int fromR, int fromC, int toR, int toC);
	bool move(const QPoint& from, const QPoint& to);
signals:
	void boardChanged(ChessBoard* );
	void gameOver(Result);
	void currentPlayerChanged(Player);
protected:
	virtual void setupBoard();
	void setBoard(ChessBoard* board);
	void setResult(Result value);
	void setCurrentPlayer(Player player);
private:
	ChessBoard* m_board;
	Result m_result;
	Player m_currentPlayer;
};

