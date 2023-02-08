#include "playerinfojson.h"
#include <QJsonArray>
#include <QJsonObject>

QJsonValue PlayerInfoJson::toJson(const Player& player)
{
	QJsonObject object;
	object["name"]       = player.name;
	object["password"]   = player.password;
	object["experience"] = player.experience;
	object["hitpoints"]  = player.hitPoints;
	object["location"]   = player.location;
	object["position"]   = QJsonObject({ {"x", player.position.x()},
												{"y", player.position.y()} });
	object["inventory"] = toJson(player.inventory);
	return object;
}

QJsonValue PlayerInfoJson::toJson(const InventoryItem& item)
{
	QJsonObject object;
	object["type"]       = InventoryItem::nameByType(item.type);
	object["subtype"]    = item.subType;
	object["durability"] = item.durability;
	return object;
}

QJsonValue PlayerInfoJson::toJson(const QVector<InventoryItem>& inventory)
{
	QJsonArray jsonArray;
	for(const InventoryItem& item: inventory)
	{
		jsonArray << toJson(item);
	}
	return jsonArray;
}

QJsonArray PlayerInfoJson::toJson(const PlayerInfo& info)
{
	QJsonArray jsonArray;
	for (const Player& player: info.players)
	{
		jsonArray << toJson(player);
	}
	return jsonArray;
}

QByteArray PlayerInfoJson::playerInfoToJson(const PlayerInfo& info)
{
	const QJsonDocument doc(toJson(info));
	return doc.toJson();
}

InventoryItem PlayerInfoJson::inventoryItemFromJson(const QJsonObject& object)
{
	InventoryItem item;
	item.type = InventoryItem::typeByName(object["type"].toString());
	item.subType = object["subtype"].toString();
	item.durability = object["durability"].toDouble();
	return item;
}

QList<InventoryItem> PlayerInfoJson::inventoryFromJson(const QJsonArray& json_array)
{
	QVector<InventoryItem> inventory;
	for (const QJsonValue& value : json_array)
	{
		inventory << inventoryItemFromJson(value.toObject());
	}
	return inventory;
}

Player PlayerInfoJson::playerFromJson(const QJsonObject& object)
{
	Player player;
	player.name       = object["name"].toString();
	player.password   = object["password"].toString();
	player.experience = object["experience"].toDouble();
	player.hitPoints  = object["hitpoints"].toDouble();
	player.location   = object["location"].toString();

	QJsonObject positionObject = object["position"].toObject();
	player.position   = QPoint(positionObject["x"].toInt(),
							   positionObject["y"].toInt());

	player.inventory = inventoryFromJson(object["inventory"].toArray());
	return player;
}

PlayerInfo PlayerInfoJson::playerInfoFromJson(const QByteArray& byte_array)
{
	const QJsonDocument document = QJsonDocument::fromJson(byte_array);
	if(!document.isArray())
	{
		return {};
	}
	QJsonArray jsonArray = document.array();
	PlayerInfo info;
	for (const QJsonValue& value: jsonArray)
	{
		info.players << playerFromJson(value.toObject());
	}
	return info;
}
