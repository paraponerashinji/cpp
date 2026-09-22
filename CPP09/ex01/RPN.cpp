#include "RPN.hpp"

RPN::RPN()
{
	return;
}

RPN::~RPN()
{
	return;
}

RPN::RPN(const RPN &var)
{
	*this = var;
}

RPN &RPN::operator=(const RPN &var)
{
	this->numbers = var.numbers;
	return (*this);
}

void RPN::calculate(std::string input)
{
	std::stringstream ss(input);
    std::string c;

    while (ss >> c)
	{
		if (c.size() == 1 && (c == "+" || c == "-" || c == "*" || c == "/"))
        {
            if (numbers.size() < 2)
            {
                std::cout << "Invalid input." << std::endl;
                return;
            }

            int b = numbers.top();
            numbers.pop();
            int a = numbers.top();
            numbers.pop();

            if (c == "+")
                numbers.push(a + b);
            else if (c == "-")
                numbers.push(a - b);
            else if (c == "*")
                numbers.push(a * b);
            else if (c == "/")
                numbers.push(a / b);
        }
		else
        {
            std::stringstream numberStream(c);
            int value;
            char extra;

            if (!(numberStream >> value) || (numberStream >> extra))
            {
                std::cout << "Invalid input." << std::endl;
                return;
            }
			if (value >= 10)
			{
                std::cout << "Invalid input." << std::endl;
                return;
            }
        	numbers.push(value);
		}
	}
	if (numbers.size() == 1)
	{
		double result = numbers.top();
		numbers.pop();
		std::cout << "Result: " << result << std::endl;
	}
	else
	{
		std::cout << "Invalid input." << std::endl;
	}
}
