/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:30:03 by aharder           #+#    #+#             */
/*   Updated: 2025/11/11 12:38:27 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{
    
}

HumanA::HumanA(Weapon weapon, std::string name)
{
    HumanA::_weapon = weapon;
    HumanA::_name = name;
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon &new_weapon)
{
    _weapon = new_weapon;
}