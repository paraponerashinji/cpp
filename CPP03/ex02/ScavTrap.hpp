/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:17:07 by aharder           #+#    #+#             */
/*   Updated: 2025/11/03 11:38:05 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    private:
        std::string name;
    public:
    ScavTrap(std::string name);
    ~ScavTrap();
    void    guardGate();
    std::string getName(void);
};