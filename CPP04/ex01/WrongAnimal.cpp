/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:33:19 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/03 12:37:40 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "unknown wrong animal";
    std::cout << "WrongAnimal Constructor called" <<  std::endl;
}

WrongAnimal::WrongAnimal(std::string _type)
{
    this->type = _type;
    std::cout << "WrongAnimal of type " << this->type << " Constructor called" <<  std::endl;
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
    return this->type;
}