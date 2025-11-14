/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:54:25 by aharder           #+#    #+#             */
/*   Updated: 2025/11/14 13:45:57 by aharder          ###   ########.fr       */
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
    Fixed& operator=(const Fixed &to_copy);
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);
    Fixed operator+(const Fixed &to_add);
    Fixed operator-(const Fixed &to_add);
    Fixed operator*(const Fixed &to_add);
    Fixed operator/(const Fixed &to_add);
    bool operator>(const Fixed &to_compare);
    bool operator>=(const Fixed &to_compare);
    bool operator<(const Fixed &to_compare);
    bool operator<=(const Fixed &to_compare);
    bool operator==(const Fixed &to_compare);
    bool operator!=(const Fixed &to_compare);
    ~Fixed();
    float   toFloat(void) const;
    static Fixed max(Fixed &f_one, Fixed &f_two);
    static Fixed max(const Fixed &f_one, const Fixed &f_two);
    static Fixed min(Fixed &f_one, Fixed &f_two);
    static Fixed min(const Fixed &f_one, const Fixed &f_two);
    int     toInt(void) const;
    int    getRawBits(void) const;
    void    setRawBits(int const raw);

};

std::ostream& operator<<(std::ostream &out, const Fixed &f);
