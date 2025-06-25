/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:51:28 by aharder           #+#    #+#             */
/*   Updated: 2025/06/25 12:25:48 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
    std::string method;
    int         number;
    std::string name;
    while (1)
    {
        std::cout << "Insert the method:\n";
        std::getline(std::cin, method);
        if (method.compare("exit") == 0)
            return(0);
        if (method.compare("zombieHorde") != 0)
        {
            std::cout << "Invalid method\n";
            continue;
        }
        std::cout << "Insert the name:\n";
        std::getline(std::cin, name);
        std::cout << "Insert the size:\n";
        std::cin >> number;
        Zombie *horde;
        horde = zombieHorde(number, name);
        for (int i = 0; i < number; i++)
        {
            horde[i].announce();
        }
        delete[] horde;
    }
}