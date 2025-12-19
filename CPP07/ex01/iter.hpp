/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 22:03:05 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/12 12:52:04 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    echo(std::string &array);
template <typename T>

void    iter(T* array, size_t len, void (*f)(T &))
{
    for (size_t i = 0 ; i < len ; i++)
        f(array[i]);
}