/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 23:22:19 by alexandreha       #+#    #+#             */
/*   Updated: 2025/10/31 23:29:35 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(float a, float b) : x(Fixed(a)), y(Fixed(b))
{
}

Point::~Point()
{
}

Point& Point::operator=(const Point &to_copy)
{
    (void)to_copy;
    return (*this);
}

Point::Point(const Point &to_copy) : x(to_copy.x), y(to_copy.y)
{
}

Fixed Point::get_x()
{
    return (this->x);
}

Fixed Point::get_y()
{
    return (this->y);
}