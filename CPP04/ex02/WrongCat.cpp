/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:32:53 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/03 12:33:08 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Constructor called" <<  std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" <<  std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow ?" << std::endl;
}