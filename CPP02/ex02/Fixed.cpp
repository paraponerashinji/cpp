/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:02:48 by aharder           #+#    #+#             */
/*   Updated: 2025/10/28 17:21:05 by aharder          ###   ########.fr       */
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
    std::cout << "Float constructor called" << std::endl;
    Fixed::value = roundf(raw * (pow(2, this->fract_bits)));
    std::cout << "[DEBUG] " << Fixed::toFloat() << std::endl;
}

Fixed::Fixed(int const raw)
{
	std::cout << "Int constructor called" << std::endl;
	Fixed::value = round(raw * (pow(2, this->fract_bits)));
    std::cout << "[DEBUG] " << Fixed::toInt() << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float   Fixed::toFloat(void) const
{
	return ((float)Fixed::value / pow(2, this->fract_bits));
}

int	 Fixed::toInt(void) const
{
	return ((int)Fixed::value / pow(2, this->fract_bits));
}

Fixed& Fixed::operator=(const Fixed &to_copy)
{
	Fixed::value = to_copy.getRawBits();
	std::cout << "Assignement operator called" << std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return out;
}

Fixed& Fixed::operator++()
{
    Fixed::value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed old = *this;
    Fixed::value++;
    return (old);
}

Fixed& Fixed::operator--()
{
    Fixed::value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed old = *this;
    Fixed::value--;
    return (old);
}

Fixed Fixed::operator+(const Fixed &to_add)
{
    return (Fixed(Fixed::toFloat() + to_add.toFloat()));
}

Fixed Fixed::operator-(const Fixed &to_add)
{
    return (Fixed(Fixed::toFloat() - to_add.toFloat()));
}

Fixed Fixed::operator*(const Fixed &to_add)
{
    
   return (Fixed(Fixed::toFloat() * to_add.toFloat()));
}

Fixed Fixed::operator/(const Fixed &to_add)
{
    return (Fixed(Fixed::toFloat() / to_add.toFloat()));
}

Fixed Fixed::max(const Fixed &f_one, const Fixed &f_two)
{
    if (f_one.value > f_two.value)
        return f_one;
    else
        return f_two;
}

Fixed Fixed::max(Fixed &f_one, Fixed &f_two)
{
    if (f_one.value > f_two.value)
        return f_one;
    else
        return f_two;
}

Fixed Fixed::min(const Fixed &f_one, const Fixed &f_two)
{
    if (f_one.value < f_two.value)
        return f_one;
    else
        return f_two;
}

Fixed Fixed::min(Fixed &f_one, Fixed &f_two)
{
    if (f_one.value < f_two.value)
        return f_one;
    else
        return f_two;
}