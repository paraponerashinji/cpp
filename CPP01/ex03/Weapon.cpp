/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:17:06 by aharder           #+#    #+#             */
/*   Updated: 2025/06/25 15:01:35 by aharder          ###   ########.fr       */
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

std::string Weapon::getType()
{
    std::string nothing = "nothing";
    std::string &nothingREF = nothing;
    if (_type.empty())
    {
        return (nothingREF);
    }
    const std::string &typeREF = _type;
    return (typeREF);
}

void    Weapon::setType(std::string type)
{
    Weapon::_type = type;
}