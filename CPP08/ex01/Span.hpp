/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:43:14 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/18 19:14:45 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <cstdarg>
#include <vector>

class Span
{
private:
    int *_span;
    unsigned int _N;
    unsigned int _N_stored;
public:
    Span();
    Span(unsigned int N);
    ~Span();
    void    addNumber(int i);
    void    addRange(int a, int b);
    void    addNumbers(unsigned int count, ...);
    void    addRandom(unsigned int size);
    int     shortestSpan();
    int     longestSpan();
    class   SpanIsFullException: public std::exception
    {
        public:
            const char* what() const throw();
    };
    class   NotEnoughNumbersException: public std::exception
    {
        public:
            const char* what() const throw();
    };
};
