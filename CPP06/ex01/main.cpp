/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:21:29 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/10 14:26:34 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

int main()
{
    Data D;
    uintptr_t ptr;
    D.i = 8;
    D.str = "Hey";

    std::cout << D.i << " " << D.str << std::endl;
    ptr = serializer::serialize(&D);
    std::cout << ptr << std::endl;
    Data *D2 = serializer::deserialize(ptr);
    std::cout << D2->i << " " << D2->str << std::endl;
}