#include <QFile>
#include <QDate>
#include <QPoint>

struct Player
{
	QString name;
	qint64 experience;
	QPoint position;
	char direction;
};

void init_players(std::vector<Player>& players)
{
	for (int i = 0; i < 10; ++i)
	{
		Player player;
		player.name = "SOME_NAME";
		player.experience = 0;
		player.position = QPoint(0, 0);
		player.direction = 's';
		players.push_back(player);
	}
}

QDataStream& operator<<(QDataStream& stream, const Player& p)
{
	stream << p.name;
	stream << p.experience;
	stream << p.position;
	stream << p.direction;
	return stream;
}
QDataStream& operator<<(QDataStream& stream, Player& p)
{
	stream >> p.name;
	stream >> p.experience;
	stream >> p.position;
	stream >> p.direction;
	return stream;
}

int main(int argc, char* argv[])
{
	/*QFile file("output.txt");
	file.open(QFile::WriteOnly | QFile::Text);
	QTextStream stream(&file);
	stream << "Today is " << QDate::currentDate().toString() <<	Qt::endl;
	const QTime t = QTime::currentTime();
	stream << "Current time is " << t.hour() << "h and " << t.minute() << "m." << Qt::endl;*/

	QFile fileP("players.txt");
	fileP.open(QFile::WriteOnly | QFile::Text);
	QTextStream streamP(&fileP);
	streamP << Qt::center;
	streamP << qSetFieldWidth(16) << "Player" << qSetFieldWidth(0) << " ";
	streamP << qSetFieldWidth(10) << "Experience" << qSetFieldWidth(0) << " ";
	streamP << qSetFieldWidth(13) << "Position" << qSetFieldWidth(0) << " ";
	streamP << "Direction" << Qt::endl;

	std::vector<Player> players;
	init_players(players);
	for (const Player& player : players) 
	{
		streamP << Qt::left << qSetFieldWidth(16) << player.name << qSetFieldWidth(0) << " ";
		streamP << Qt::right << qSetFieldWidth(10) << player.experience << qSetFieldWidth(0) << " ";
		streamP << Qt::right << qSetFieldWidth(6) << player.position.x() << qSetFieldWidth(0) << " ";
		streamP << qSetFieldWidth(6) << player.position.y() << qSetFieldWidth(0) << " ";
		streamP << Qt::center << qSetFieldWidth(10);
		switch (player.direction)
		{
			case 'n': streamP << "north"; break;
			case 's': streamP << "south"; break;
			case 'e': streamP << "east"; break;
			case 'w': streamP << "west"; break;
			default: streamP << "unknown"; break;
		}
		streamP << qSetFieldWidth(0) << Qt::endl;
	}

	return 0;
}
