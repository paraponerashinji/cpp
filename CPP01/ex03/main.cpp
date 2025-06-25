/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:36:33 by aharder           #+#    #+#             */
/*   Updated: 2025/06/25 15:05:05 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob(club, "Bob");
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    Weapon other_club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(other_club);
    jim.attack();
    other_club.setType("some other type of club");
    jim.attack();
    return 0;
}