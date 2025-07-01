/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:54:25 by aharder           #+#    #+#             */
/*   Updated: 2025/07/01 13:51:28 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Fixed
{
private:
    int value;
    static const int fract_bits = 8;
public:
    Fixed();
    Fixed(int const raw);
    Fixed(float const raw);
    Fixed(Fixed &to_copy);
    Fixed& operator=(const Fixed &to_copy)
    {
        Fixed::value = to_copy.getRawBits();
        std::cout << "Assignement operator called" << std::endl;
        return *this;
    }
    ~Fixed();
    float   toFloat(void) const;
    int     toInt(void) const;
    int    getRawBits(void) const;
    void    setRawBits(int const raw);
};
