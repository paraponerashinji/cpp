/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:41:11 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/03 12:13:56 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Steve_clap_trap"), FragTrap(), ScavTrap()
{
    this->name = "Steve";
    setHealthPoints(FragTrap::getHealthPoints());
    setEnergyPoints(ScavTrap::getEnergyPoints());
    setAttackDamage(FragTrap::getAttackDamage());
    std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap"), FragTrap(name), ScavTrap(name)
{
    this->name = name;
    setHealthPoints(FragTrap::getHealthPoints());
    setEnergyPoints(ScavTrap::getEnergyPoints());
    setAttackDamage(FragTrap::getAttackDamage());
    std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "I am " << this->name << " of DiamondTrap class, I inherited from the ClapTrap name " << ClapTrap::getName() << std::endl;
}