/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 21:31:30 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/11 21:58:49 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
};

template <typename T>
T min(T a, T b)
{
    if (a > b)
        return (b);
    return (a);
};

template <typename T>
T max(T a, T b)
{
    if (a < b)
        return (b);
    return (a);
}