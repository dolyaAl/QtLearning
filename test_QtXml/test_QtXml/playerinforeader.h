#pragma once
#include "player.h"
#include <QXmlStreamReader>
class PlayerInfoReader
{
	Q_GADGET
public:
	PlayerInfoReader(QIODevice* device);
	QVector<InventoryItem> readInventory();
	Player readPlayer();
	PlayerInfo read();
	
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

	static Token tokenByName(const QStringView& r);
private:
	QXmlStreamReader m_reader;
};

