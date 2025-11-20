/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:53:56 by aharder           #+#    #+#             */
/*   Updated: 2025/11/20 16:21:36 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void    ScalarConverter::convert(std::string value)
{
    if (value.find_first_not_of("O123456789") == std::string::npos)
    {
        
    }
    else if (value.find_first_not_of("O123456789.") == std::string::npos)
    {
        
    }
}