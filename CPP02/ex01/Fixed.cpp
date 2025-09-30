/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:02:48 by aharder           #+#    #+#             */
/*   Updated: 2025/10/01 00:09:25 by aharder          ###   ########.fr       */
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
    Fixed::value = roundf(raw * (1 << Fixed::fract_bits));
}

Fixed::Fixed(int const raw)
{
	std::cout << "Int constructor called" << std::endl;
	Fixed::value = raw << Fixed::fract_bits;
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

float   Fixed::toFloat(void) const
{
	return ((float)Fixed::value / (1 << Fixed::fract_bits));
}

int	 Fixed::toInt(void) const
{
	return (Fixed::value >> Fixed::fract_bits);
}

Fixed& Fixed::operator=(const Fixed &to_copy)
	{
		Fixed::value = to_copy.getRawBits();
		std::cout << "Assignement operator called" << std::endl;
		return *this;
	}