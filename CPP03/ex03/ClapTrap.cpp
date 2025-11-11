/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:36:47 by aharder           #+#    #+#             */
/*   Updated: 2025/11/03 11:57:09 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    ClapTrap::attack_damage = 0;
    ClapTrap::health = 10;
    ClapTrap::energy = 10;
    ClapTrap::name = "Steve";
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    ClapTrap::attack_damage = 0;
    ClapTrap::health = 10;
    ClapTrap::energy = 10;
    ClapTrap::name = name;
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int health, unsigned int energy, unsigned int attack_damage)
{
    ClapTrap::attack_damage = attack_damage;
    ClapTrap::health = health;
    ClapTrap::energy = energy;
    ClapTrap::name = name;
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    ClapTrap::energy--;
    std::cout << "ClapTrap " << ClapTrap::name << " attack " << target << ", causing " << ClapTrap::attack_damage << " points of damage" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
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

void    ClapTrap::setName(const std::string &name)
{
    ClapTrap::name = name;
}

void    ClapTrap::setHealthPoints(unsigned int hp)
{
    ClapTrap::health = hp;
}

void    ClapTrap::setEnergyPoints(unsigned int ep)
{
    ClapTrap::energy = ep;
}

void    ClapTrap::setAttackDamage(unsigned int ad)
{
    ClapTrap::attack_damage = ad;
}

std::string ClapTrap::getName(void) const
{
    return ClapTrap::name;
}

unsigned int ClapTrap::getHealthPoints(void) const
{
    return ClapTrap::health;
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
    return ClapTrap::energy;
}

unsigned int ClapTrap::getAttackDamage(void) const
{
    return ClapTrap::attack_damage;
}