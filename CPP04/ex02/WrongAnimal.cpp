/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:33:19 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/15 15:39:47 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "unknown wrong animal";
    std::cout << "WrongAnimal Constructor called" <<  std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    _type = type;
    std::cout << "WrongAnimal of type " << _type << " Constructor called" <<  std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" <<  std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "*something feels wrong*" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}