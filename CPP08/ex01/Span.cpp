/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:09:17 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/18 19:20:04 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    _N = 0;
    _N_stored = 0;
    _span = new int[_N];
}

Span::Span(unsigned int N): _N(N)
{
    _span = new int[_N];
    _N_stored = 0;
}

Span::~Span()
{
    delete []_span;
}

void    Span::addNumber(int i)
{
    if (_N_stored >= _N)
        throw SpanIsFullException();
    _span[_N_stored] = i;
    _N_stored++;
    std::sort(_span, _span + _N_stored);
    /*
    for (unsigned int j = 0; j < _N_stored; j++)
    {
        std::cout << _span[j] << " ";
    }
    std::cout << std::endl;*/
}

void    Span::addNumbers(unsigned int count, ...)
{
    va_list args;
    va_start(args, count);
    for (unsigned int i = 0; i < count; i++)
    {
        int value = va_arg(args, int);
        addNumber(value);
    }
    va_end(args);
}

void    Span::addRange(int a, int b)
{
    
    for (int i = a; i <= b; i++)
    {
        if (_N_stored >= _N)
            throw SpanIsFullException();
        _span[_N_stored] = i;
        _N_stored++;
    }
    std::sort(_span, _span + _N_stored);
}

void Span::addRandom(unsigned int size)
{
    std::srand(time(NULL));
    for (unsigned int i = 0; i < size; i++)
        addNumber(std::rand());
}

int Span::shortestSpan()
{
    if (_N_stored < 2)
        throw NotEnoughNumbersException();
    int span = longestSpan();
    for (size_t i = 0; i < _N_stored - 1; i++)
    {
        if (_span[i + 1] - _span[i] < span)
            span = _span[i + 1] - _span[i];
    }
    return (span);
}

int Span::longestSpan()
{
    if (_N_stored < 2)
        throw NotEnoughNumbersException();
    return (_span[_N_stored - 1] - _span[0]);    
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
    return ("Not enough numbers to get a span !");
}

const char *Span::SpanIsFullException::what() const throw()
{
    return ("Not enough space in span !");
}