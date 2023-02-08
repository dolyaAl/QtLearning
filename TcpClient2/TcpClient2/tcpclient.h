#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_tcpclient.h"
#include <QTcpSocket>

class TcpClient : public QMainWindow
{
    Q_OBJECT

public:
    TcpClient(QWidget *parent = nullptr);
    ~TcpClient();
public slots:
    void connection();
    void connected();
    void readyRead();
    void sendMessage();
private:
    void newMessage(const QString& message);

    Ui::TcpClientClass* ui = new Ui::TcpClientClass;
    QTcpSocket* m_socket;
    QByteArray m_receivedData;
};
