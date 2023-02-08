#include <QRegularExpression>

int get_weight(const QString& input)
{
	const QRegularExpression regex(R"(\A(?<number>[1-9][0-9]{0,2}.[0-9]{0,2})\s*(?<unit>mg|g|kg)\z)",
	                               QRegularExpression::CaseInsensitiveOption);
	if(const QRegularExpressionMatch match = regex.match(input); match.hasMatch())
	{
		const QString number = match.captured("number"); //0-full string, next-substring captured by the brackets () in pattern
		double weight = number.toDouble();
		if(const QString unit = match.captured("unit").toLower(); unit == "g")
		{
			weight *= 1000;
		}
		else if(unit == "kg")
		{
			weight *= 1000000;
		}
		return weight;
	}
	return -1;
}


int main(int argc, char* argv[])
{
	qDebug() << get_weight("1.1 kg");
	return 0;
}