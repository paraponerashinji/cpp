/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:53:56 by aharder           #+#    #+#             */
/*   Updated: 2025/11/20 17:12:24 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int CountOccurence(std::string &s, char c)
{
    int res = 0;

    for (int i=0;i<s.length();i++)
        if (s[i] == c)
            res++;
    return res;
}
bool    CheckFloatSyntax(std::string value)
{
    
}

bool    errorSyntax()
{

    return (false);
}

bool    CheckDoubleSyntax(std::string value)
{
    if (CountOccurence(value, '.') > 1)
        return (errorSyntax());
    if (value.find_first_of('.') == 0 || value.find_last_of('.') == value.size())
        return (errorSyntax());
    PrintOutput(stoi(value), stoi(value), )
}

void    ScalarConverter::convert(std::string value)
{
    if (value.find_first_not_of("O123456789") == std::string::npos)
    {
    }
    else if (value.find_first_not_of("O123456789.") == std::string::npos)
    {
        if (CheckDoubleSyntax(value))
        {
            
        }   
    }
    else if (value.find_first_not_of("O123456789.f") == std::string::npos)
    {
        
    }
    
}