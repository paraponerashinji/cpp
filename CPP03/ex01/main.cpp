/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 00:20:00 by aharder           #+#    #+#             */
/*   Updated: 2025/10/01 00:31:41 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "=== Testing ClapTrap ===" << std::endl;
    ClapTrap clap("ClapBot");
    
    clap.attack("target1");
    clap.takeDanage(5);
    clap.beRepaired(3);
    clap.takeDanage(15); // Should "die"
    clap.attack("target2"); // Should fail - no hit points
    clap.beRepaired(5); // Should fail - no hit points
    
    std::cout << "\n=== Testing ScavTrap ===" << std::endl;
    ScavTrap scav("ScavBot");
    
    scav.attack("enemy1");
    scav.takeDanage(20);
    scav.beRepaired(10);
    scav.guardGate(); // Special ScavTrap ability
    scav.takeDanage(50);
    scav.guardGate(); // Should still work even with low HP
    
    std::cout << "\n=== Testing ScavTrap inheritance ===" << std::endl;
    ScavTrap scav2("Guardian");
    
    // Test multiple attacks to drain energy
    for (int i = 0; i < 5; i++) {
        scav2.attack("intruder");
    }
    
    scav2.guardGate();
    
    std::cout << "\n=== Testing constructors/destructors ===" << std::endl;
    {
        ScavTrap temp("Temporary");
        temp.guardGate();
    } // Destructor should be called here
    
    std::cout << "\n=== End of tests ===" << std::endl;
    return (0);
}