#include "CaesarCipher.h"
qint64 CaesarCipherDevice::writeData(const char* data, qint64 len)
{
	QByteArray byteArray;
	byteArray.resize(len);
	for (int i = 0; i < len; ++i)
	{
		byteArray[i] = data[i] + m_key;
	}
	const int written = m_baseDevice->write(byteArray);
	emit bytesWritten(written);
	return written;
}

qint64 CaesarCipherDevice::readData(char* data, qint64 maxlen)
{
	QByteArray baseData = m_baseDevice->read(maxlen);
	const int size = baseData.size();
	for (int i = 0; i < size; ++i)
	{
		data[i] = baseData[i] - m_key;
	}
	return size;
}