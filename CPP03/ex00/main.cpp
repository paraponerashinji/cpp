/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:54:12 by aharder           #+#    #+#             */
/*   Updated: 2025/07/01 14:57:22 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    a("Thierry");

    a.attack("Jacques");
    a.takeDanage(4);
    a.beRepaired(8);
    a.takeDanage(10);
    a.beRepaired(10);
    return (0);
}