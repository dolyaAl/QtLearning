#pragma once

#include <QtWidgets/QWidget>
#include <QtNetwork/QNetworkAccessManager>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QSignalMapper>
#include <QProgressBar>
#include "ui_filedownload.h"

class FileDownload : public QWidget
{
    Q_OBJECT
public:
    FileDownload(QWidget *parent = nullptr);
    ~FileDownload();
public slots:
    void downloadFinished(QNetworkReply* reply);
    void startDownloadButtonClicked();
    void finishedImage(QObject* replyObject);
    void downloadBar(quint64 bytesReceived, quint64 bytesTotal);
private:
    Ui::FileDownloadClass* ui = new Ui::FileDownloadClass;
    QNetworkAccessManager* m_networkManager;
    QPushButton* m_startDownloadButton;
    QSignalMapper* m_imageFinishedMapper;
    QPlainTextEdit* m_edit;
    QProgressBar* m_downloadBar;
};


