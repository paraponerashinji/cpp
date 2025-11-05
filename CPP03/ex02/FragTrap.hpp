/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 00:20:52 by aharder           #+#    #+#             */
/*   Updated: 2025/11/03 11:37:00 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
    private:
        std::string name;
    public:
    FragTrap(std::string name);
    ~FragTrap();
    void	highFivesGuys(void);
    std::string getName(void);
};