#pragma once
#include "inventoryitem.h"
#include <QPoint>
class Player
{
public:
	QString name;
	QString password;
	int experience;
	int hitPoints;
	QVector<InventoryItem> inventory;
	QString location;
	QPoint position;
};

struct PlayerInfo
{
	QVector<Player> players;
};
