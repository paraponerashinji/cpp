/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:38:49 by aharder           #+#    #+#             */
/*   Updated: 2025/09/29 13:44:40 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main()
{
    std::string instruction;
    phonebook      my_phonebook;
    while (1)
    {
        std::cout << "Enter ADD, SEARCH, or EXIT\n";
        std::cin >> instruction;
        if (instruction.compare("ADD"))
            phonebook.add();
        else if (instruction.compare("SEARCH"))
            phonebook.search();
        else if (instruction.compare("EXIT"))
            break;
        else
            std::cout << "ERROR : please enter ADD, SEARCH, or EXIT\n"
    }
}