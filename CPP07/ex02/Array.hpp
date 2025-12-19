/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 12:55:49 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/16 16:07:45 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <iostream>
#include <stdlib.h>
template <typename T>

class Array
{
private:
    T *_elements;
    size_t _size;
public:
    Array(): _size(0)
    {
        _elements = new T[_size];    
    };
    Array(unsigned int size): _size(size)
    {
        _elements = new T[size];
    }
    Array(const Array &array): _size(array.getsize())
    {
        *this = array;
    }
    ~Array()
    {
        if (_elements != NULL)
            delete []_elements;
    }
    Array &operator=(const Array &array)
    {
        if (this == &array)
            return *this;
        if (_elements != NULL)
            delete []_elements;
        _size = array.getsize();
        _elements = new T[_size];
        for (size_t i = 0; i < _size; i++)
            _elements[i] = array._elements[i];
        return (*this);
    }
    T& operator[](unsigned int i)
    {
        if (i >= _size || _elements == NULL)
        {
            throw Array<T>::InvalidIndexException();
        }
        return (this->_elements[i]);
    }
    size_t getsize() const
    {
        return (_size);
    }
    class   InvalidIndexException: public std::exception
    {
        public:
            const char* what() const throw()
            {
                return ("Invalid Index !");
            }
    };
};


