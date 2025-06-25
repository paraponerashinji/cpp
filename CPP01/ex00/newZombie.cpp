/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:37:45 by aharder           #+#    #+#             */
/*   Updated: 2025/06/20 14:45:44 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *new_zombie;

    new_zombie = new Zombie(name);
    return (new_zombie);
}