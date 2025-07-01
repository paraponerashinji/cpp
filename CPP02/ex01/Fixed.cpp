/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:02:48 by aharder           #+#    #+#             */
/*   Updated: 2025/07/01 14:23:52 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(float const raw)
{
    int temp;
    float   dec_num;

    std::cout << "Float constructor called" << std::endl;
    temp = (int)raw;
    dec_num = raw - temp;
    Fixed::value = roundf(raw);
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