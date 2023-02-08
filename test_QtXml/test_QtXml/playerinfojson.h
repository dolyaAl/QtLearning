#pragma once
#include <QJsonDocument>

#include "player.h"

class PlayerInfoJson
{
public:
	PlayerInfoJson() = default;
	static QJsonValue toJson(const Player& player);
	static QJsonValue toJson(const InventoryItem& item);
	static QJsonValue toJson(const QVector<InventoryItem>& inventory);
	static QJsonArray toJson(const PlayerInfo& info);
	static QByteArray playerInfoToJson(const PlayerInfo& info);
	static InventoryItem inventoryItemFromJson(const QJsonObject& object);
	static QList<InventoryItem> inventoryFromJson(const QJsonArray& json_array);
	static Player playerFromJson(const QJsonObject& object);
	static PlayerInfo playerInfoFromJson(const QByteArray& byte_array);
};



