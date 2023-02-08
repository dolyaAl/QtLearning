#include "playerinforeader.h"
#include <QFile>
#include <QDebug>
#include "playerinfowriter.h"

int main(int argc, char* argv[])
{
	QFile file("output.xml");
	file.open(QFile::ReadOnly | QFile::Text);
	PlayerInfoReader reader(&file);
	PlayerInfo playerInfo = reader.read();
	if (!playerInfo.players.isEmpty())
	{
		qDebug() << "Count:" << playerInfo.players.count();
		qDebug() << "Size of inventory:" << playerInfo.players.first().inventory.size();
		qDebug() << "Inventory item:" << playerInfo.players.first().inventory[0].type << playerInfo.players.first().inventory[0].subType;
		qDebug() << "Room:" << playerInfo.players.first().location << playerInfo.players.first().position;
	}
	QFile file1("output.xml");
	file1.open(QFile::WriteOnly | QFile::Text);
	PlayerInfoWriter writer(&file1);
	writer.write(playerInfo);
	return 0;
}
