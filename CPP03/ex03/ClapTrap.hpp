/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:24:46 by aharder           #+#    #+#             */
/*   Updated: 2025/11/03 12:04:38 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
private:
    std::string name;
    unsigned int         health;
    unsigned int         energy;
    unsigned int         attack_damage;
public:
    ClapTrap(std::string name);
    ClapTrap();
    ClapTrap(std::string name, unsigned int health, unsigned int energy, unsigned int attack_damage);
    ~ClapTrap();
    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    setName(const std::string &name);
    void    setHealthPoints(unsigned int hp);
    void    setEnergyPoints(unsigned int ep);
    void    setAttackDamage(unsigned int ad);
    unsigned int getHealthPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;
    std::string getName(void) const;
};
#endif