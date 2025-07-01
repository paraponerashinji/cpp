/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:24:46 by aharder           #+#    #+#             */
/*   Updated: 2025/07/01 14:59:24 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    ~ClapTrap();
    void    attack(const std::string &target);
    void    takeDanage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};
