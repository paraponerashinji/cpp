/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:54:12 by aharder           #+#    #+#             */
/*   Updated: 2025/07/01 15:41:35 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    a("Thierry");

    a.attack("Jacques");
    a.takeDanage(4);
    a.beRepaired(8);
    a.takeDanage(10);
    a.beRepaired(10);
    a.guardGate();
    return (0);
}