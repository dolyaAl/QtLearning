#pragma once
#include <QPoint>
#include "chessalgorithm.h"
class FoxAndHounds: public ChessAlgorithm
{
public:
	FoxAndHounds(QObject* parent = nullptr);
	void newGame() override;
	bool move(int fromR, int fromC, int toR, int toC) override;
protected:
	bool emptyByOffset(int x, int y) const;
	bool foxCanMove() const;
private:
	QPoint m_fox;
};

