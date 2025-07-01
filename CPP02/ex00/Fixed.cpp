/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:02:48 by aharder           #+#    #+#             */
/*   Updated: 2025/07/01 13:43:24 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (Fixed::value);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    Fixed::value = raw;
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    Fixed::value = 0;
}

Fixed::Fixed(Fixed &to_copy)
{
    std::cout << "Copy constructor called" << std::endl;
    Fixed::value = to_copy.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}