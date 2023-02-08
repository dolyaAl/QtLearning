#include "inventoryitem.h"
#include <QMetaEnum>

InventoryItem::Type InventoryItem::typeByName(const QStringRef& ref)
{
	return typeByName(ref.toLatin1());
}
InventoryItem::Type InventoryItem::typeByName(const QString& ref)
{
	return typeByName(ref.toLatin1());
}

InventoryItem::Type InventoryItem::typeByName(const QByteArray& latin1)
{
	const QMetaEnum metaEnum = QMetaEnum::fromType<Type>();
	int result = metaEnum.keyToValue(latin1.constData());
	return static_cast<Type>(result);
}

QString InventoryItem::nameByType(Type type)
{
	const QMetaEnum metaEnum = QMetaEnum::fromType<Type>();
	const QString result = metaEnum.valueToKey(static_cast<int>(type));
	return result;
}
