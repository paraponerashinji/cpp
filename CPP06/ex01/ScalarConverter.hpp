/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:48:09 by aharder           #+#    #+#             */
/*   Updated: 2025/12/08 23:12:59 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

class ScalarConverter
{
    public:
        static void    convert(std::string value);
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter &copy);
        ~ScalarConverter();
        ScalarConverter &operator=(ScalarConverter &copy);
};
