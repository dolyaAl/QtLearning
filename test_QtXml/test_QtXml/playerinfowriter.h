#pragma once
#include <QXmlStreamWriter>
#include "player.h"

class PlayerInfoWriter
{
	Q_GADGET
public:
	PlayerInfoWriter(QIODevice* device);
	void writeInventory(const QVector<InventoryItem>& inventory);
	void writePlayer(const Player& player);
	void write(PlayerInfo& info);

	enum class Token
	{
		Invalid = -1,
		PlayerInfo,//root tag
		Player,//in PlayerInfo
		Name, Password, Inventory, Location, //in Player
		Position, //in Location
		InvItem //in Inventory
	};
	Q_ENUM(Token)

	static QString nameByToken(Token token);
private:
	QXmlStreamWriter m_writer;
};

