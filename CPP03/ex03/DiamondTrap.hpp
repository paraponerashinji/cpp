/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:38:55 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/03 12:06:17 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
    private:
        std::string name;
    public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    void    whoAmI();
};