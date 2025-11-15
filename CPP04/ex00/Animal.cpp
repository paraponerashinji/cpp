/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:18:40 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/15 15:36:50 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    _type = "unknown animal";
    std::cout << "Animal Constructor called" <<  std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" <<  std::endl;
}

Animal::Animal(std::string type)
{
    _type = type;
    std::cout << "Animal of type " << _type << " Constructor called" <<  std::endl;
}

void Animal::makeSound() const
{
    std::cout << "*loud and clear silence*" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}