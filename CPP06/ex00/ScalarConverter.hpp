/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:48:09 by aharder           #+#    #+#             */
/*   Updated: 2026/08/14 16:00:54 by aharder          ###   ########.fr       */
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
