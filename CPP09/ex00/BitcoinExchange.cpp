#include "BitcoinExchange.hpp"

static std::string trim(const std::string &str)
{
	size_t start = str.find_first_not_of(" \t\n\r");
	if (start == std::string::npos)
		return "";
	size_t end = str.find_last_not_of(" \t\n\r");
	return str.substr(start, end - start + 1);
}

static bool stringToDouble(const std::string &str, double &value)
{
	std::stringstream ss(str);
	ss >> value;
	if (ss.fail())
		return false;
	return true;
}

Btc::Btc()
{
	int i = 0;
	std::ifstream file("./data.csv");
	if (!file.is_open())
	{
		return;
	}
	std::string line;
	while(std::getline(file, line))
	{
		if (i == 0)
		{
			i = 1;
			continue;
		}
		size_t pos = line.find(',');
		if (pos == std::string::npos)
		{
			std::cerr << "Error : Invalid parsing" << std::endl;
			continue;
		}
		std::string date = line.substr(0, pos);
        double value;
		if (!stringToDouble(trim(line.substr(pos + 1)), value))
		{
			std::cerr << "Error : Invalid parsing" << std::endl;
			continue;
		}
		this->setData(date, value);
	}
	file.close();
}

Btc::~Btc()
{
}

Btc &Btc::operator=(Btc const &var)
{
	this->data = var.data;
	return (*this);
}

Btc::Btc(Btc const &var)
{
	*this = var;
}

void Btc::setData(std::string date, float value)
{
	this->data.insert(std::make_pair(date, value));
}

std::map<std::string, float> Btc::getData()
{
	return (this->data);
}

std::vector<std::string> Btc::splitString(std::string str, char delimiter)
{
	std::vector<std::string> substrings;
	std::string substring = "";
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] != delimiter)
		{
			substring += str[i];
		}
		else
		{
			substrings.push_back(substring);
			while (str[i] == delimiter)
				i++;
			i--;
			substring = "";
		}
	}
	substrings.push_back(substring);
	return substrings;
}

bool isLeapYear(int year)
{
	if (year % 400 == 0)
		return true;
	if (year % 100 == 0)
		return false;
	return (year % 4 == 0);
}

bool isValidDate(const std::string &date)
{
	if (date.length() != 10)
		return false;
	if (date[4] != '-' || date[7] != '-')
		return false;
	for (size_t i = 0; i < date.length(); ++i)
	{
		if (i == 4 || i == 7)
			continue;
		if (!std::isdigit(date[i]))
			return false;
	}

	int year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 + (date[2] - '0') * 10 + (date[3] - '0');
	int month = (date[5] - '0') * 10 + (date[6] - '0');
	int day = (date[8] - '0') * 10 + (date[9] - '0');

	if (year < 0 || month < 1 || month > 12)
		return false;

	int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == 2 && isLeapYear(year))
		daysInMonth[1] = 29;
	if (day < 1 || day > daysInMonth[month - 1])
         return false;
     return true;
}

void Btc::readInput(std::string inputPath)
{
	int i = 0;
	std::ifstream file(inputPath.c_str());
	if (!file.is_open())
	{
		return;
	}
	std::string line;
	std::vector<std::string> vectorLine;
	while(std::getline(file, line))
	{
		if (i == 0)
		{
			i = 1;
			continue;
		}
		vectorLine = this->splitString(line, '|');
		if (vectorLine.size() < 2)
		{
			std::cout << "Error : No '|' found" << std::endl;
			continue;
		}
		vectorLine[0] = trim(vectorLine[0]);
		vectorLine[1] = trim(vectorLine[1]);
		if (vectorLine[1].length() == 0 || vectorLine.size() < 2 || !isValidDate(vectorLine[0]))
		{
			std::cout << "Error: bad input => " << vectorLine[0] << std::endl;
			continue;
		}
		vectorLine[0] = trim(vectorLine[0]);
		vectorLine[1] = trim(vectorLine[1]);

		double amount;
		if (!stringToDouble(vectorLine[1], amount))
		{
			std::cout << "Error : Input Not A Number" << std::endl;
			continue;
		}
		if (amount < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		if (amount > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		std::map<std::string, float>::iterator it = this->data.upper_bound(vectorLine[0]);
		if (it == this->data.begin())
		{
			std::cout << "Error: no lower date found." << std::endl;
			continue;
		}
		--it;
		std::cout << vectorLine[0] << " => " << amount << " = " << amount * it->second << std::endl;

	}
	file.close();
}
