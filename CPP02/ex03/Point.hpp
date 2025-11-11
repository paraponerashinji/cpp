/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:55:22 by alexandreha       #+#    #+#             */
/*   Updated: 2025/10/31 23:28:33 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point(float x, float y);
    Point(const Point &to_copy);
    ~Point();
    Point& operator=(const Point &to_copy);
    Fixed get_x();
    Fixed get_y();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);