/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:18:40 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/15 15:45:17 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
    _type = "unknown animal";
    std::cout << "Animal Constructor called" <<  std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal Destructor called" <<  std::endl;
}

AAnimal::AAnimal(std::string type)
{
    _type = type;
    std::cout << "Animal of type " << _type << " Constructor called" <<  std::endl;
}

std::string AAnimal::getType() const
{
    return _type;
}