/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:45:38 by aharder           #+#    #+#             */
/*   Updated: 2025/09/29 14:02:02 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook()
{
}

phonebook::~phonebook()
{
}

void    phonebook::add()
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string number;
    std::string secret;

    std::cout << "Enter First name\n";
    std::cin >> first_name;
    std::cout << "Enter Last name\n";
    std::cin >> last_name;
    std::cout << "Enter Nickname\n";
    std::cin >> nickname;
    std::cout << "Enter Number\n";
    std::cin >> number;
    if (number.find("0") || number.find("1") || number.find("2") || number.find("3") || number.find("4") || number.find("5") || number.find("6") || number.find("7") || number.find("8") || number.find("9") )
        std::cout << "Invalid number\n"; return;
    std::cout << "Enter darkest secret\n";
    std::cin >> secret;
    phonebook::Contact(first_name, last_name, nickname, number, secret);

}