/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:36:47 by aharder           #+#    #+#             */
/*   Updated: 2025/07/01 15:01:23 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    ClapTrap::attack_damage = 0;
    ClapTrap::health = 10;
    ClapTrap::energy = 10;
    ClapTrap::name = name;
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    ClapTrap::energy--;
    std::cout << "ClapTrap " << ClapTrap::name << " attack " << target << ", causing " << ClapTrap::attack_damage << " points of damage" << std::endl;
}

void    ClapTrap::takeDanage(unsigned int amount)
{
    ClapTrap::health -= amount;
    std::cout << "ClapTrap took " << amount << " damage" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    unsigned int temp = 0;
    if (amount > ClapTrap::energy)
    {
        temp = ClapTrap::energy;
        ClapTrap::health += temp;
        ClapTrap::energy -= temp;
        std::cout << "ClapTrap healed " << temp << ", he coulndt heal " << amount - temp << " because he has no more energy" << std::endl;
    }
    else
    {
        ClapTrap::health += amount;
        ClapTrap::energy -= amount;
        std::cout << "ClapTrap healed " << amount << std::endl;
    }
}