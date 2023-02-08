#pragma once
#include <QWidget>
#include <QPointer>
#include <QIcon>
#include <QMouseEvent>
#include "chessboard.h"

class ChessView: public QWidget
{
	Q_OBJECT
	Q_PROPERTY(QSize fieldSize
		READ fieldSize
		WRITE setFieldSize
		NOTIFY fieldSizeChanged)
public:
	ChessView(QWidget* parent = nullptr);
	~ChessView();

	class Highlight
	{
	public:
		Highlight() {}
		virtual ~Highlight(){}
		virtual int type() const { return 0; }
	};
	class FieldHightlight:public Highlight
	{
	public:
		enum {Type = 1};
		FieldHightlight(int rank, int column, QColor color):m_field(column, rank), m_color(color){}
		inline int column() const { return m_field.x(); }
		inline int rank() const { return m_field.y(); }
		inline QColor color() const { return m_color; }
		int type() const { return Type; }
	private:
		QPoint m_field;
		QColor m_color;
	};

	QSize fieldSize() const;
	void setFieldSize(QSize value);
	void setBoard(ChessBoard* board);
	ChessBoard* board() const;
	QSize sizeHint() const override;
	QRect fieldRect(int rank, int column) const;
	void setPiece(char type, const QIcon& icon);
	QIcon piece(char type) const;
	void addHighlight(Highlight* highlight);
	void removeHighlight(Highlight* highlight);
	Highlight* highlight(int index) const;
	int highlightCount() const;
signals:
	void fieldSizeChanged(QSize size);
	void clicked(const QPoint& point);
protected:
	QPoint fieldAt(const QPoint& point) const;
	void drawHighlights(QPainter* painter);
	void paintEvent(QPaintEvent* event) override;
	virtual void drawRank(QPainter* painter, int rank);
	virtual void drawColumn(QPainter* painter, int column);
	virtual void drawField(QPainter* painter, int rank, int column);
	virtual void drawPiece(QPainter* painter, int rank, int column);
	void mouseReleaseEvent(QMouseEvent* event) override;
private:	
	QPointer<ChessBoard> m_board;//QPointer set m_board = nullptr when board is destroyed by ChessAlgorithm
	QSize m_fieldSize;
	QMap<char, QIcon> m_pieces;
	QList<Highlight*> m_highlights;
};


