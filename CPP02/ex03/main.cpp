/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:58:46 by alexandreha       #+#    #+#             */
/*   Updated: 2025/10/31 23:18:51 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);
    Point point(5, 5);

    if (bsp(a, b, c, point))
        std::cout << "Point is inside the triangle." << std::endl;
    else
        std::cout << "Point is outside the triangle." << std::endl;

    Point point2(15, 5);
    if (bsp(a, b, c, point2))
        std::cout << "Point2 is inside the triangle." << std::endl;
    else
        std::cout << "Point2 is outside the triangle." << std::endl;
    return (0);
}