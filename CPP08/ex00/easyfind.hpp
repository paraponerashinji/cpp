/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:29:34 by alexandreha       #+#    #+#             */
/*   Updated: 2026/09/15 15:46:20 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
template <typename T>

class NotFoundException: public std::exception
    {
        const char* what() const throw()
        {
            return ("Occurence not found !");
        }
    };

typename T::iterator easyfind(T &cont, int i)
{
    T::iterator it;
    it = std::find(cont.begin(), cont.end(), i)
    if (it == cont.end())
        throw NotFoundException();
    return it;
}