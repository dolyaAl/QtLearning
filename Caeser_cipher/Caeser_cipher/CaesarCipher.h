#pragma once
#include <QIODevice>

class CaesarCipherDevice : public QIODevice
{
	Q_OBJECT
		Q_PROPERTY(int key READ key WRITE setKey)
public:
	explicit CaesarCipherDevice(QObject* parent = nullptr) :
		QIODevice(parent), m_key(0), m_baseDevice(nullptr) {}
	void setBaseDevice(QIODevice* device)
	{
		m_baseDevice = device;
	}
	QIODevice* baseDevice()
	{
		return m_baseDevice;
	}
	void setKey(const int key)
	{
		m_key = key;
	}
	inline int key() const
	{
		return m_key;
	}

	bool open(QIODeviceBase::OpenMode mode) override
	{
		if (!m_baseDevice)
		{
			return false;
		}
		if (!m_baseDevice->isOpen())
		{
			return false;
		}
		if (m_baseDevice->openMode() != mode)
		{
			return false;
		}
		return QIODevice::open(mode);
	}

protected:
	qint64 writeData(const char* data, qint64 len) override;
	qint64 readData(char* data, qint64 maxlen) override;
private:
	int m_key;
	QIODevice* m_baseDevice;
};

