/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:26:06 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/03 12:26:18 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "Dog Constructor called" <<  std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" <<  std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof !" << std::endl;
}