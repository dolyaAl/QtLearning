#pragma once

#include <QtWidgets/QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrlQuery>
#include "ui_mainwindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public: explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void sendRequest();
public slots:
    void finished(QNetworkReply* reply);
private:
    Ui::mainwindowClass* ui = new Ui::mainwindowClass;
    QNetworkAccessManager* m_networkAccessManager;
    QNetworkReply* m_reply;
};
