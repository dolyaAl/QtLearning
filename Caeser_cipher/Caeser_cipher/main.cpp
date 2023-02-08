#include "CaesarCipher.h"
#include <QBuffer>
#include <QDebug>

int main(int argc, char** argv)
{
	const QByteArray ba = "plaintext";
	QBuffer buf;
	buf.open(QIODevice::WriteOnly);
	CaesarCipherDevice encrypt;
	encrypt.setKey(3);
	encrypt.setBaseDevice(&buf);
	encrypt.open(buf.openMode());
	encrypt.write(ba);
	qDebug() << buf.data();

	CaesarCipherDevice decrypt;
	decrypt.setKey(3);
	decrypt.setBaseDevice(&buf);
	buf.open(QIODevice::ReadOnly);
	decrypt.open(buf.openMode());
	qDebug() << decrypt.readAll();
	return 0;
}
