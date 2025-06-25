/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:51:23 by aharder           #+#    #+#             */
/*   Updated: 2025/06/25 12:22:25 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
    Zombie  *new_zombie;

    new_zombie = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        new_zombie[i].setName(name);
        std::cout << "Hey\n";
    }
    return (new_zombie);
}