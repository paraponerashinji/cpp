/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:07:41 by aharder           #+#    #+#             */
/*   Updated: 2025/06/25 14:46:41 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "HumanA.hpp"
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon _weapon;
        std::string _name;
    public:
        HumanB(std::string _name);
        ~HumanB();
        void setWeapon(Weapon &new_weapon);
        void attack();
};

#endif