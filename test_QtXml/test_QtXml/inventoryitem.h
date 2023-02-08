#pragma once
#include <QObject>
#include <QStringRef>
class InventoryItem
{
	Q_GADGET
public:
	enum class Type
	{
		Weapon,
		Armor,
		Gem,
		Book,
		Other
	};
	Q_ENUM(Type)

	Type type;
	QString subType;
	int durability;

	static Type typeByName(const QStringRef& ref);
	static Type typeByName(const QString& ref);
	static Type typeByName(const QByteArray& latin1);
	static QString nameByType(Type type);
};

