/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:54:25 by aharder           #+#    #+#             */
/*   Updated: 2025/10/01 00:03:12 by aharder          ###   ########.fr       */
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
    Fixed(Fixed &to_copy);
    Fixed& operator=(const Fixed &to_copy);
    ~Fixed();
    int    getRawBits(void) const;
    void    setRawBits(int const raw);
};
