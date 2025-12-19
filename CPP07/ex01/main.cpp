/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 22:11:45 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/12 14:02:32 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    echo(std::string &array)
{
    std::cout << array << std::endl;
}

int main()
{
    std::string array[] = {"hey", "salut", "coucou", "fin"};
    size_t i = 4;
    ::iter(array, i, echo);
}