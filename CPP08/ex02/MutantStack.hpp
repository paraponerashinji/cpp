/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:43:19 by alexandreha       #+#    #+#             */
/*   Updated: 2026/01/05 10:50:21 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <cstddef>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &to_copy)
		{
			*this = to_copy;
		}
		MutantStack &operator=(const MutantStack &to_copy)
		{
			this->c = to_copy.c;
			return *this;
		}
		~MutantStack() {}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}
};