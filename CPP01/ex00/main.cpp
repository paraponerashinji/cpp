/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:51:28 by aharder           #+#    #+#             */
/*   Updated: 2025/06/20 15:40:44 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
    std::string method;
    std::string name;
    while (1)
    {
        std::cout << "Insert the method:\n";
        std::getline(std::cin, method);
        if (method.compare("newZombie") != 0 && method.compare("randomChump") != 0)
        {
            std::cout << "Invalid method\n";
            continue;
        }
        std::cout << "Insert the name:\n";
        std::getline(std::cin, name);
        if (method.compare("newZombie") == 0)
        {
            Zombie *zombie;
            zombie = newZombie(name);
            std::cout << "Zombie created" << std::endl;
            zombie->announce();
            delete zombie;
        }
        else
            randomChump(name);
    }
}