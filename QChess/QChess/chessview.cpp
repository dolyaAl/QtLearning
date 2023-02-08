#include "chessview.h"
#include <QPainter>

ChessView::ChessView(QWidget* parent)
{
}

ChessView::~ChessView()
{
}

QSize ChessView::fieldSize() const
{
	return m_fieldSize;
}

void ChessView::setFieldSize(QSize value)
{
	if(m_fieldSize == value)
	{
		return;
	}
	m_fieldSize = value;
	emit fieldSizeChanged(value);
	updateGeometry();
}

void ChessView::setBoard(ChessBoard* board)
{
	if(m_board == board)
	{
		return;
	}
	if(m_board)
	{
		m_board->disconnect(this);
	}
	m_board = board;
	if(board)
	{
		connect(board, &ChessBoard::dataChanged, this, [this] {this->update(); });
		connect(board, &ChessBoard::boardReset, this, [this] {this->update(); });
	}
	updateGeometry();
}

ChessBoard* ChessView::board() const
{
	return m_board;
}

QSize ChessView::sizeHint() const
{
	if(!m_board)
	{
		return QSize(100, 100);
	}
	QSize boardSize = QSize(fieldSize().width() * m_board->columns() + 1,
							fieldSize().height() * m_board->ranks() + 1);
	int rankSize = fontMetrics().maxWidth() + 4;
	int columnSize = fontMetrics().height() + 4;
	return boardSize + QSize(rankSize, columnSize);
}

QRect ChessView::fieldRect(int rank, int column) const
{
	if(!m_board)
	{
		return QRect();
	}
	const QSize fs = fieldSize();
	QPoint topLeft((column - 1) * fs.width(), (m_board->ranks() - rank) * fs.height());
	QRect fRect(topLeft, fs);
	int offset = fontMetrics().maxWidth() + 4;
	return fRect.translated(offset, 0);
}

void ChessView::setPiece(char type, const QIcon& icon)
{
	m_pieces.insert(type, icon);
	update();
}

QIcon ChessView::piece(char type) const
{
	return m_pieces.value(type);
}

void ChessView::addHighlight(Highlight* highlight)
{
	m_highlights.append(highlight);
	update();
}

void ChessView::removeHighlight(Highlight* highlight)
{
	m_highlights.removeOne(highlight);
	update();
}

ChessView::Highlight* ChessView::highlight(int index) const
{
	return m_highlights.at(index);
}

int ChessView::highlightCount() const
{
	return m_highlights.size();
}

QPoint ChessView::fieldAt(const QPoint& point) const
{
	if(!m_board)
	{
		return {};
	}
	const QSize fs = fieldSize();
	const int offset = fontMetrics().maxWidth() + 4;
	if(point.x() < offset)
	{
		return {};
	}
	const int column = (point.x() - offset) / fs.width();
	const int rank = point.y() / fs.height();
	if(column < 0 || column >= m_board->columns() || rank >= m_board->ranks())
	{
		return {};
	}
	return {column + 1, m_board->ranks() - rank};
}

void ChessView::drawHighlights(QPainter* painter)
{
	for (int index = 0; index < highlightCount(); ++index)
	{
		Highlight* highlight = this->highlight(index);
		if(highlight->type() == FieldHightlight::Type)
		{
			FieldHightlight* fieldHightlight = static_cast<FieldHightlight*>(highlight);
			QRect rect = fieldRect(fieldHightlight->rank(), fieldHightlight->column());
			painter->fillRect(rect, fieldHightlight->color());
		}
	}
}

void ChessView::paintEvent(QPaintEvent* event)
{
	if(!m_board)
	{
		return;
	}
	QPainter painter(this);
	for (int r = m_board->ranks(); r > 0; --r)
	{
		painter.save();
		drawRank(&painter, r);
		painter.restore();
	}
	for (int c = 1; c <= m_board->columns(); ++c)
	{
		painter.save();
		drawColumn(&painter, c);
		painter.restore();
	}
	for (int r = 1; r <= m_board->ranks(); ++r)
	{
		for (int c = 1; c <= m_board->columns(); ++c)
		{
			painter.save();
			drawField(&painter, r, c);
			painter.restore();
		}
	}
	drawHighlights(&painter);
	for (int r = m_board->ranks(); r > 0; --r)
	{
		for (int c = 1; c <= m_board->columns(); ++c)
		{
			drawPiece(&painter, r, c);
		}
	}
}

void ChessView::drawRank(QPainter* painter, int rank)
{
	const QRect r = fieldRect(rank, 1);
	const QRect rankRect = QRect(0, r.top(), r.left(), r.height()).adjusted(2, 0, -2, 0);
	const QString rankText = QString::number(rank);
	painter->drawText(rankRect, Qt::AlignVCenter | Qt::AlignRight, rankText);
}

void ChessView::drawColumn(QPainter* painter, int column)
{
	const QRect r = fieldRect(1 , column);
	const QRect columnRect = QRect(r.left(), r.bottom(), r.width(), height() - r.bottom()).adjusted(0, 2, 0, -2);
	painter->drawText(columnRect, Qt::AlignHCenter | Qt::AlignTop, QChar('a' + column - 1));
}

void ChessView::drawField(QPainter* painter, int rank, int column)
{
	QRect rect = fieldRect(rank, column);
	QColor fillColor = (column + rank) % 2 ? palette().color(QPalette::Light)
											: palette().color(QPalette::Mid);
	painter->setPen(palette().color(QPalette::Dark));
	painter->setBrush(fillColor);
	painter->drawRect(rect);
}

void ChessView::drawPiece(QPainter* painter, int rank, int column)
{
	QRect rect = fieldRect(rank, column);
	char value = m_board->data(rank, column);
	if(value != ' ')
	{
		QIcon icon = piece(value);
		if(!icon.isNull())
		{
			icon.paint(painter, rect, Qt::AlignCenter);
		}
	}
}

void ChessView::mouseReleaseEvent(QMouseEvent* event)
{
	const QPoint point = fieldAt(event->pos());
	if(point.isNull())
	{
		return;
	}
	emit clicked(point);
}
