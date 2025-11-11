/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:20:59 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/03 12:21:20 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat Constructor called" <<  std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" <<  std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow !" << std::endl;
}