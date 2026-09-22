#pragma once

#include <iostream>
#include <stack>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <cctype>
class RPN
{
private:
	std::stack<double> numbers;
public:
	RPN();
	RPN(const RPN &var);
	~RPN();
	RPN &operator=(const RPN &var);
	void calculate(std::string input);
		
};

