/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:43:19 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/20 00:15:30 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <cstddef>

template <typename T>
class MutantClass
{
    private:
        T   *stack;
    public:
        class iterator: public std::iterator
        {
        private:
            T   *i_ptr;
        public:
            iterator(T *value): i_ptr(value) {};
            T &operator*() const
            {
                return (*i_ptr);
            }
            T *operator->()
            {
                return (i_ptr);
            }
            iterator& operator++()
            {
                i_ptr++;
                return *this;
            }
            iterator operator++()
            {
                iterator tmp = *this;
                i_ptr++;
                return (tpm);
            }
            iterator& operator--()
            {
                i_ptr--;
                return *this;
            }
            iterator operator--()
            {
                iterator tmp = *this;
                if (i_ptr - 1 < 0)
                    throw OutOfBoundIterator();
                i_ptr--;
                return (tpm);
            }
        };
        MutantClass(/* args */);
        ~MutantClass();
};