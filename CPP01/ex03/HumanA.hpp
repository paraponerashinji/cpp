/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:52:32 by aharder           #+#    #+#             */
/*   Updated: 2025/06/25 15:06:38 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanA
{
private:
    Weapon _weapon;
    std::string _name;
public:
    void    attack();
    void    setWeapon(Weapon &new_weapon);
    HumanA(Weapon weapon, std::string name);
    ~HumanA();
};

#endif