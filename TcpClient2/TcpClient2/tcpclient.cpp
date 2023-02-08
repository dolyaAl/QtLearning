#include "tcpclient.h"

TcpClient::TcpClient(QWidget *parent)
    : QMainWindow(parent)
{
	ui->setupUi(this);
	ui->address->setText(QHostAddress(QHostAddress::LocalHost).toString());
    ui->port->setValue(52693);
	m_socket = new QTcpSocket(this);
	connect(m_socket, &QTcpSocket::connected, this, &TcpClient::connected);
	connect(m_socket, &QTcpSocket::readyRead, this, &TcpClient::readyRead);
	connect(ui->text, &QLineEdit::returnPressed, this, &TcpClient::sendMessage);
	connect(ui->connect, &QPushButton::clicked, this, &TcpClient::connection);
}

TcpClient::~TcpClient()
{}

void TcpClient::connection()
{
	if(m_socket->state() != QAbstractSocket::ConnectedState)
	{
		ui->chat->appendPlainText(tr("== Connecting..."));
		m_socket->connectToHost(ui->address->text(), ui->port->value());
	}
}

void TcpClient::connected()
{
	ui->chat->appendPlainText(tr("== Connected"));
	ui->connect->setEnabled(false);
}

void TcpClient::readyRead()
{
	m_receivedData.append(m_socket->readAll());
	while (true)
	{
		const int endIndex = m_receivedData.indexOf(23);
		if (endIndex < 0)
		{
			break;
		}
		QString message = QString::fromUtf8(m_receivedData.left(endIndex));
		m_receivedData.remove(0, endIndex + 1);
		newMessage(message);
	}
}

void TcpClient::sendMessage()
{
	QString message = QStringLiteral("%1: %2").arg(ui->user->text()).arg(ui->text->text());
	QByteArray messageArray = message.toUtf8();
	messageArray.append(23);
	m_socket->write(messageArray);
}

void TcpClient::newMessage(const QString& message)
{
	ui->chat->appendPlainText(message);
}
