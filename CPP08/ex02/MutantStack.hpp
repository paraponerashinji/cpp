/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:43:19 by alexandreha       #+#    #+#             */
/*   Updated: 2026/09/15 15:46:18 by aharder          ###   ########.fr       */
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
		typedef typename std::stack<T>::container_type::const_iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}
		const_iterator begin() const
		{
			return this->c.begin();
		}

		const_iterator end() const
		{
			return this->c.end();
		}
		reverse_iterator begin()
		{
			return this->c.rbegin();
		}

		reverse_iterator end()
		{
			return this->c.rend();
		}
		const_reverse_iterator begin() const
		{
			return this->c.rbegin();
		}

		const_reverse_iterator end() const
		{
			return this->c.rend();
		}
};