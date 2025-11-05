/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:18:40 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/03 12:30:03 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "unknown animal";
    std::cout << "Animal Constructor called" <<  std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" <<  std::endl;
}

Animal::Animal(std::string _type)
{
    this->type = _type;
    std::cout << "Animal of type " << this->type << " Constructor called" <<  std::endl;
}

void Animal::makeSound() const
{
    std::cout << "*loud and clear silence*" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}