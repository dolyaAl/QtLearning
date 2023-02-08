#include "playerinfowriter.h"
#include <QMetaEnum>

PlayerInfoWriter::PlayerInfoWriter(QIODevice* device)
{
	m_writer.setDevice(device);
	m_writer.setAutoFormatting(true);
}

void PlayerInfoWriter::writeInventory(const QVector<InventoryItem>& inventory)
{
	m_writer.writeStartElement(nameByToken(Token::Inventory));
	for(const auto invItem: inventory)
	{
		m_writer.writeStartElement(nameByToken(Token::InvItem));
		m_writer.writeAttribute("type", InventoryItem::nameByType(invItem.type));
		m_writer.writeAttribute("durability", QString::number(invItem.durability));

		m_writer.writeStartElement("SubType");
		m_writer.writeCharacters(invItem.subType);
		m_writer.writeEndElement();

		m_writer.writeEndElement();
	}
	m_writer.writeEndElement();
}

void PlayerInfoWriter::writePlayer(const Player& player)
{
	m_writer.writeStartElement(nameByToken(Token::Player));//player start
	m_writer.writeAttribute("hp", QString::number(player.hitPoints));
	m_writer.writeAttribute("exp", QString::number(player.experience));

	//name
	m_writer.writeStartElement(nameByToken(Token::Name));
	m_writer.writeCharacters(player.name);
	m_writer.writeEndElement();

	//password
	m_writer.writeStartElement(nameByToken(Token::Password));
	m_writer.writeCharacters(player.password);
	m_writer.writeEndElement();

	//inventory
	writeInventory(player.inventory);

	//location
	m_writer.writeStartElement(nameByToken(Token::Location));
	m_writer.writeAttribute("name", player.location);

	//position
	m_writer.writeEmptyElement(nameByToken(Token::Position));
	m_writer.writeAttribute("x", QString::number(player.position.x()));
	m_writer.writeAttribute("y", QString::number(player.position.y()));

	m_writer.writeEndElement();//location end

	m_writer.writeEndElement();//player end
}

void PlayerInfoWriter::write(PlayerInfo& info)
{
	m_writer.writeStartDocument();
	m_writer.writeStartElement(nameByToken(Token::PlayerInfo));
	for (const auto& player: info.players)
	{
		writePlayer(player);
	}
	m_writer.writeEndElement();
	m_writer.writeEndDocument();
}

QString PlayerInfoWriter::nameByToken(Token token)
{
	const QMetaEnum metaEnum = QMetaEnum::fromType<Token>();
	const QString result = metaEnum.valueToKey(static_cast<int>(token));
	return result;
}
