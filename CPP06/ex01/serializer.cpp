/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:45:40 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/10 14:07:13 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

uintptr_t serializer::serialize(Data *ptr)
{
    uintptr_t p = reinterpret_cast<uintptr_t>(ptr);
    return (p);
}

Data    *serializer::deserialize(uintptr_t p)
{
    Data *ptr = reinterpret_cast<Data *>(p);
    return (ptr);
}