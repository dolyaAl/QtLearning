#include "playerinforeader.h"

#include <QMetaEnum>

PlayerInfoReader::PlayerInfoReader(QIODevice* device)
{
	m_reader.setDevice(device);
}

QVector<InventoryItem> PlayerInfoReader::readInventory()
{
	QVector<InventoryItem> inventory;
	while (m_reader.readNextStartElement())
	{
		if(tokenByName(m_reader.name()) != Token::InvItem)
		{
			m_reader.skipCurrentElement();
			continue;
		}
		InventoryItem item;
		const QXmlStreamAttributes& itemAttributes = m_reader.attributes();
		item.durability = itemAttributes.value("durability").toInt();
		item.type = InventoryItem::typeByName(itemAttributes.value("type"));
		while (m_reader.readNextStartElement())
		{
			if(m_reader.name().toString() == "SubType")
			{
				item.subType = m_reader.readElementText();
			}
			else
			{
				m_reader.skipCurrentElement();
			}
		}
		inventory << item;
	}
	return inventory;
}

Player PlayerInfoReader::readPlayer()
{
	Player player;
	const QXmlStreamAttributes& playerAttributes = m_reader.attributes();
	player.hitPoints = playerAttributes.value("hp").toInt();
	player.experience = playerAttributes.value("exp").toInt();
	while (m_reader.readNextStartElement())
	{
		switch (Token t = tokenByName(m_reader.name()))
		{
		case Token::Name:
			{
				player.name = m_reader.readElementText();
				break;
			}
		case Token::Password:
			{
				player.password = m_reader.readElementText();
				break;
			}
		case Token::Inventory:
			{
				player.inventory = readInventory();
				break;
			}
		case Token::Location:
			{
				player.location = m_reader.attributes().value("name").toString();
				while(m_reader.readNextStartElement())
				{
					if(tokenByName(m_reader.name()) == Token::Position)
					{
						const QXmlStreamAttributes& positionAttributes = m_reader.attributes();
						player.position.setX(positionAttributes.value("x").toInt());
						player.position.setY(positionAttributes.value("y").toInt());
					}
					else
					{
						m_reader.skipCurrentElement();
					}
				}
				break;
			}
		default:
			{
			break;
			}
		}
	}
	return player;
}

PlayerInfo PlayerInfoReader::read()
{
	if(!m_reader.readNextStartElement())
	{
		return {};
	}
	if(tokenByName(m_reader.name()) != Token::PlayerInfo)
	{
		return {};
	}
	PlayerInfo info;
	while (m_reader.readNextStartElement())
	{
		if(tokenByName(m_reader.name()) == Token::Player)
		{
			Player player = readPlayer();
			info.players.push_back(player);
		}
		else
		{
			m_reader.skipCurrentElement();
		}
	}
	return info;
}

PlayerInfoReader::Token PlayerInfoReader::tokenByName(const QStringView& r)
{
	const QMetaEnum metaEnum = QMetaEnum::fromType<Token>();
	const QByteArray latin1 = r.toLatin1();
	int result = metaEnum.keyToValue(latin1.constData());
	return static_cast<Token>(result);
}
