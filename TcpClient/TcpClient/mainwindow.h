#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include <QTcpServer>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void newConnection();
public slots:
    void removeConnection();
    void readyRead();
private:
    void newMessage(const QTcpSocket* socket, const QString& chars);
    
    Ui::MainWindowClass* ui = new Ui::MainWindowClass;
    QTcpServer* m_server;
    QVector<QTcpSocket*> m_clients;
    QHash<QTcpSocket*, QByteArray> m_receivedData;
};
