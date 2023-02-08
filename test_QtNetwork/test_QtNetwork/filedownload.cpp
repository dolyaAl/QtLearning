#include "filedownload.h"
#include <QtNetwork/QNetworkReply>
#include <QPixmap>
#include <QFile>
#include <QByteArray>


FileDownload::FileDownload(QWidget *parent)
    : QWidget(parent)
{
    ui->setupUi(this);
    m_startDownloadButton = new QPushButton("StartDownload", this);
    m_edit = new QPlainTextEdit(this);
    m_downloadBar = new QProgressBar(this);
    ui->gridLayout->addWidget(m_startDownloadButton);
    ui->gridLayout->addWidget(m_downloadBar);
    ui->gridLayout->addWidget(m_edit);
    m_networkManager = new QNetworkAccessManager(this);
    m_imageFinishedMapper = new QSignalMapper(this);
    connect(m_networkManager, &QNetworkAccessManager::finished, this, &FileDownload::downloadFinished);
    connect(m_startDownloadButton, &QPushButton::clicked, this, &FileDownload::startDownloadButtonClicked);
}

FileDownload::~FileDownload()
{
    delete ui;
}

void FileDownload::downloadFinished(QNetworkReply* reply)
{
    if (reply->error() != QNetworkReply::NoError)
    {
        const QString error = reply->errorString();
    	m_edit->setPlainText(error);
        return;
    }
    /*const QByteArray content = reply->readAll();
    m_edit->setPlainText(QString::fromUtf8(content));
    reply->deleteLater();*/
    connect(reply, &QNetworkReply::downloadProgress, this, &FileDownload::downloadBar);
}

void FileDownload::downloadBar(quint64 bytesReceived, quint64 bytesTotal)
{
	const qreal progress = (bytesTotal < 1) ? 1.0 : static_cast<qreal>(bytesReceived) / bytesTotal;
    m_downloadBar->setValue(qRound(progress * m_downloadBar->maximum()));
}

void FileDownload::startDownloadButtonClicked()
{
	/*const QUrl url("http://localhost/version.txt");
    m_networkManager->get(QNetworkRequest(url));*/
    QVector<QString> urls = { 
                                "https://cs6.pikabu.ru/avatars/980/x980752-313007080.png" };
    for (const QString& url : urls) {
        QNetworkRequest request(url);
    	QNetworkReply* reply = m_networkManager->get(request);
    	connect(reply, &QNetworkReply::finished, m_imageFinishedMapper, static_cast<void(QSignalMapper::*)()>(&QSignalMapper::map));
        m_imageFinishedMapper->setMapping(reply, reply);
    }
    connect(m_imageFinishedMapper, &QSignalMapper::mappedObject, this, &FileDownload::finishedImage);
}

void FileDownload::finishedImage(QObject* replyObject)
{
    QNetworkReply* reply = qobject_cast<QNetworkReply*>(replyObject);
    if (!reply)
    {
        return;
    }
    
    QPixmap pix;
    const QByteArray data = reply->readAll();
    qDebug() << data.size();
    pix.loadFromData(data);
    qDebug() << pix.size();
    QFile file("yourFile.png");
    file.open(QIODevice::WriteOnly);
    pix.save(&file, "PNG");
    file.close();

    reply->deleteLater();
}
