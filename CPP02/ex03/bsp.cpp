/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:59:03 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/14 13:48:04 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   ft_abs(float number)
{
    if (number < 0)
        return (-number);
    return (number);
}

float   get_area(Point x, Point y, Point z)
{
    return ft_abs(x.get_x().toFloat() * (y.get_y().toFloat() - z.get_y().toFloat()) + y.get_y().toFloat() * (z.get_y().toFloat() - x.get_y().toFloat()) + z.get_x().toFloat() * (x.get_y().toFloat() - y.get_y().toFloat()) / 2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float abc_area = get_area(a, b, c);
    float pbc_area = get_area(point, b, c);
    float abp_area = get_area(a, b, point);
    float apc_area = get_area(a, point, c);

    if (abc_area == (pbc_area + abp_area + apc_area))
        return (true);
    else
        return (false);
}