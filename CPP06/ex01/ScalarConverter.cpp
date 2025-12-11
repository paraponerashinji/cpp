/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:53:56 by aharder           #+#    #+#             */
/*   Updated: 2025/12/08 23:51:36 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void    printInvalid()
{
    std::cout << "No conversion are possible" << std::endl;
}

void    printLitteral(std::string value)
{
    if (value[value.length() - 1] == 'f')
        value.erase(value.length() - 1);
    std::cout << "char : impossible" << std::endl;
    std::cout << "int : impossible" << std::endl;
    std::cout << "float : " << value << "f" << std::endl;
    std::cout << "double : " << value << std::endl;
}

void printChar(std::string value)
{
    std::cout << "char : " << static_cast<char>(value[0]) << std::endl;
    std::cout << "int : " << static_cast<int>(value[0]) << std::endl;
    std::cout << "float : " << static_cast<float>(value[0]) << ".0f" << std::endl;
    std::cout << "double : " << static_cast<double>(value[0]) << ".0" << std::endl;
}

void printInt(std::string value)
{
    std::stringstream str(value);
    int num;
    str >> num;
    if (num >= 32 && num <= 127)
        std::cout << "char : " << static_cast<char>(num) << std::endl;
    else
        std::cout << "char : non displayable" << std::endl;
    std::cout << "int : " << num << std::endl;
    std::cout << "float : " << static_cast<float>(num) << ".0f" << std::endl;
    std::cout << "double : " << static_cast<double>(num) << ".0" << std::endl;
}

void printFloat(std::string value)
{
    std::cout << "float cond" << std::endl;
    std::stringstream str(value);
    float   num;
    str >> num;
    if (num - static_cast<int>(num) == 0.0f && static_cast<int>(num) >= 32 && static_cast<int>(num) <= 127)
            std::cout << "char : " << static_cast<char>(num) << std::endl;
    else
        std::cout << "char : non displayable" << std::endl;
    std::cout << "int : " << static_cast<int>(num) << std::endl;
    if (num - static_cast<int>(num) == 0.0f)
        std::cout << "float : " << num << ".0f" << std::endl;
    else
        std::cout << "float : " << num << "f" << std::endl;
    if (num - static_cast<int>(num) == 0.0f)
        std::cout << "double : " << static_cast<double>(num) << ".0" << std::endl;
    else
        std::cout << "double : " << static_cast<double>(num) << std::endl;
}

void printDouble(std::string value)
{
    std::cout << "double cond" << std::endl;
    std::stringstream str(value);
    double num;
    str >> num;

    if (num - static_cast<int>(num) == 0.0f && static_cast<int>(num) >= 32 && static_cast<int>(num) <= 127)
            std::cout << "char : " << static_cast<char>(num) << std::endl;
    else
        std::cout << "char : non displayable" << std::endl;
    std::cout << "int : " << static_cast<int>(num) << std::endl;
    std::cout << "float : " << static_cast<float>(num) << "f" << std::endl;
    std::cout << "double : " << num << std::endl;
}

bool    IsLitteral(std::string value)
{
    if (value == "nanf")
        return true;
    else if (value == "nan")
        return true;
    if (value[0] == '+' || value[0] == '-')
        value.erase(0);
    if (value == "inff" || value == "inf")
        return true;
    return false;
}

bool    IsValid(std::string value)
{
    if (value.empty())
    {
        return false;
    }
    if (IsLitteral(value))
        return true;
    if (value.length() == 1)
        return true;
    if (value[0] == '+' || value[0] == '-')
        value.erase(0);
    if (value.find_first_not_of("0123456789.f") == std::string::npos)
        return true;
    return (false);
}

void    ScalarConverter::convert(std::string value)
{
    if (!IsValid(value))
        printInvalid();
    else if (IsLitteral(value))
        printLitteral(value);
    else if (value.length() == 1 && value.find_first_not_of("0123456789") != std::string::npos)
        printChar(value);
    else if (value[value.length() - 1] == 'f')
        printFloat(value);
    else if (value.find(".") == std::string::npos)
        printInt(value);
    else
        printDouble(value);
}