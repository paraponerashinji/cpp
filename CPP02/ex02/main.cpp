/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:36:11 by aharder           #+#    #+#             */
/*   Updated: 2025/11/14 13:44:59 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b(Fixed(5.05f) * Fixed(2));
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
if (a < b)
    std::cout << "B is greater than A" << std::endl;
else
    std::cout << "B is greater than A" << std::endl;
if (a <= b)
    std::cout << "B is greater or equal than A" << std::endl;
else
    std::cout << "B is greater or equal than A" << std::endl;
if (a > b)
    std::cout << "A is greater than B" << std::endl;
else
    std::cout << "A is not greater than B" << std::endl;
if (a >= b)
    std::cout << "A is greater or equal than B" << std::endl;
else
    std::cout << "A is not greater or equal than B" << std::endl;
if (a != b)
    std::cout << "A is not equal to B" << std::endl;
else
    std::cout << "A is equal to B" << std::endl;
if (a == b)
    std::cout << "A is equal to B" << std::endl;
else
    std::cout << "A is not equal to B" << std::endl;
std::cout << Fixed::max(a, b) << std::endl;
std::cout << Fixed::min(a, b) << std::endl;
return 0;
}