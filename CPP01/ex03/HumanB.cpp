/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:32:12 by aharder           #+#    #+#             */
/*   Updated: 2025/11/11 12:58:36 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack()
{
    std::cout << _name << " attacks with " << _weapon.getType() << std::endl;
}
HumanB::~HumanB()
{
    
}

HumanB::HumanB(std::string _name)
{
    Weapon nothing = Weapon("nothing");
    HumanB::setWeapon(nothing);
    HumanB::_name = _name;
}

void    HumanB::setWeapon(Weapon &new_weapon)
{
    _weapon = new_weapon;
}