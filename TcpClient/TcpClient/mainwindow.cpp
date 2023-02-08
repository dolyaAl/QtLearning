#include "mainwindow.h"
#include <QPlainTextEdit>
#include <QTcpSocket>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui->setupUi(this);
    setWindowTitle("TcpServer");
    ui->disconnectClients->setEnabled(false);
    m_server = new QTcpServer(this);
    if(!m_server->listen(QHostAddress::LocalHost, 52693))
    {
        ui->log->setPlainText(tr("Failure while starting server: %1").arg(m_server->errorString()));
        return;
    }
    connect(m_server, &QTcpServer::newConnection, this, &MainWindow::newConnection);
    ui->address->setText("Address: " + m_server->serverAddress().toString());
    ui->port->setText("Port: " + QString::number(m_server->serverPort()));
}

MainWindow::~MainWindow()
{}
				
void MainWindow::newConnection()
{
	while(m_server->hasPendingConnections())
	{
        QTcpSocket* socket = m_server->nextPendingConnection();
        m_clients << socket;
        ui->disconnectClients->setEnabled(true);
        connect(socket, &QTcpSocket::disconnected, this, &MainWindow::removeConnection);   
        connect(socket, &QTcpSocket::readyRead, this, &MainWindow::readyRead);
        ui->log->appendPlainText(tr("* New Connection: %1, port %2\n")
            .arg(socket->peerAddress().toString()).arg(socket->peerPort()));
	}
}

void MainWindow::removeConnection()
{
	const auto socket = qobject_cast<QTcpSocket*>(sender());
    if(!socket)
    {
        return;
    }
    ui->log->appendPlainText(tr("* Connection removed: %1, port %2\n").arg(socket->peerAddress().toString()).arg(socket->peerPort()));
    m_clients.removeOne(socket);
    m_receivedData.remove(socket);
    socket->deleteLater();
    ui->disconnectClients->setEnabled(!m_clients.isEmpty());
}

void MainWindow::readyRead()
{
    QTcpSocket* socket = qobject_cast<QTcpSocket*>(sender());
    if(!socket)
    {
        return;
    }
    QByteArray& buffer = m_receivedData[socket];
    buffer.append(socket->readAll());
    while (true)
    {
        const int endIndex = buffer.indexOf(23);
        if(endIndex < 0)
        {
            break;
        }
        QString message = QString::fromUtf8(buffer.left(endIndex));
        buffer.remove(0, endIndex + 1);
        newMessage(socket, message);
    }
}

void MainWindow::newMessage(const QTcpSocket* sender, const QString& message)
{
    ui->log->appendPlainText(tr("Sending message: %1\n").arg(message));
    QByteArray messageArray = message.toUtf8();
    messageArray.append(23);
    for(auto socket: m_clients)
    {
	    if(socket->state() == QAbstractSocket::ConnectedState)
	    {
            socket->write(messageArray);
	    }
    }
    Q_UNUSED(sender);
}
