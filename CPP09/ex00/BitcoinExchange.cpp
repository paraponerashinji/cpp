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

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <cctype>
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
		if (vectorLine[1].length() == 0 || vectorLine.size() < 2)
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
