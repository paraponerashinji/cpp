/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:17:06 by aharder           #+#    #+#             */
/*   Updated: 2025/11/11 12:24:22 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    Weapon::_type = _type;
}

Weapon::Weapon()
{
    
}

Weapon::~Weapon()
{
    
}

std::string &Weapon::getType()
{
    std::string nothing = "nothing";
    if (_type.empty())
        return (nothing);
    return (_type);
}

void    Weapon::setType(std::string type)
{
    Weapon::_type = type;
}