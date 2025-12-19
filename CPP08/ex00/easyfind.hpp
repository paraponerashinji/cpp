/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:29:34 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/17 14:02:49 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
template <typename T>

typename T::iterator easyfind(T &cont, int i)
{
    return std::find(cont.begin(), cont.end(), i);
}