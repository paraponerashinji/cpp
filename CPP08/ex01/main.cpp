/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 18:16:27 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/18 19:24:53 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span smallSpan = Span(5);
        smallSpan.addNumber(6);
        smallSpan.addNumber(3);
        smallSpan.addNumber(17);
        smallSpan.addNumber(9);
        smallSpan.addNumber(11);
        std::cout << smallSpan.shortestSpan() << std::endl;
        std::cout << smallSpan.longestSpan() << std::endl;
        
        Span bigSpan(15000);
        bigSpan.addRange(-1000, -1);
        bigSpan.addNumbers(10, -2000, -1500, -500, 0, 100, 500, 1000, 1500, 2000, 2500);
        bigSpan.addRange(1, 2000);
        bigSpan.addNumbers(8, -5000, -4500, -4000, -3500, -3000, -2500, -2200, -2100);
        bigSpan.addRange(-500, 500);
        bigSpan.addNumbers(7, -10000, -9000, -8000, -7000, -6000, -5500, -5200);
        bigSpan.addRange(3000, 6999);
        bigSpan.addNumbers(9, -20000, -15000, -12000, 10000, 15000, 20000, 25000, 30000, 35000);
        bigSpan.addRange(7500, 7999);
        int count = 0;
        for (int i = -40000; count < 1000; count++)
        {
            bigSpan.addNumber(i);
            i -= 10;
        }
        for (int i = 40000; count < 2000; count++)
        {
            bigSpan.addNumber(i);
            i+= 10;
        }
        std::cout << bigSpan.shortestSpan() << std::endl;
        std::cout << bigSpan.longestSpan() << std::endl;
        Span randomSpan(20000);
        randomSpan.addRandom(5000);
        std::cout << randomSpan.shortestSpan() << std::endl;
        std::cout << randomSpan.longestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}