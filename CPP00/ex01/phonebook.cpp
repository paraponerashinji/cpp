/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:45:38 by aharder           #+#    #+#             */
/*   Updated: 2025/09/30 01:23:10 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook()
{
	phonebook_size = 0;
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
	if (number.find_first_of("0123456789") == std::string::npos)
	{
		std::cout << "Invalid number\n";
		return;
	}
    std::cout << "Enter darkest secret\n";
    std::cin >> secret;
    if (phonebook_size < 8)
		Contact[phonebook_size] = contact(first_name, last_name, nickname, number, secret);
	else
		Contact[0] = contact(first_name, last_name, nickname, number, secret);
	phonebook_size++;
}

void	phonebook::search()
{
	std::string input;

	if (phonebook_size == 0)
	{
		std::cout << "No contact in your phonebook !\n";
		return;
	}
	std::cout << std::setw(5) << "Index" << "|";
	std::cout << std::setw(10) << "Firstname" << "|";
	std::cout << std::setw(10) << "Lastname" << "|";
	std::cout << std::setw(10) << "Nickname\n";
	for (int i = 0; i < phonebook_size; i++)
	{
		std::cout << std::setw(5) << i << "|";
		std::string firstname = Contact[i].get_firstname();
		if (firstname.length() > 9)
			firstname = firstname.substr(0, 9) + ".";
		std::string lastname = Contact[i].get_lastname();
		if (lastname.length() > 9)
			lastname = lastname.substr(0, 9) + ".";
		std::string nickname = Contact[i].get_nickname();
		if (nickname.length() > 9)
			nickname = nickname.substr(0, 9) + ".";
		std::cout << std::setw(10) << firstname << "|";
		std::cout << std::setw(10) << lastname << "|";
		std::cout << std::setw(10) << nickname << "\n";
	}
	std::cout << "Type a contact's index to obtain personal informations : \n";
	std::cin >> input;
	int index = atoi(input.c_str());
	if (index > 7 || index < 0 || index >= phonebook_size || input.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "Please enter a valid number !\n";
		return;
	}
	std::cout << "Name : " << Contact[index].get_firstname() << "\n";
	std::cout << "Lastname : " << Contact[index].get_lastname() << "\n";
	std::cout << "Nickname : " << Contact[index].get_nickname() << "\n";
	std::cout << "Phone number : " << Contact[index].get_number() << "\n";
	std::cout << "Darkest secret : " << Contact[index].get_secret() << "\n";
}