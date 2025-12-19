/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 23:05:32 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/17 14:08:37 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int main()
{
	std::list<int> test;
	test.push_back(155);
	test.push_back(156);
	test.push_back(157);

	std::list<int>::const_iterator	it;

	it = ::easyfind(test, 155);
	if (it == test.end())
		std::cout << "Occurence not found !" << std::endl;
	else
    	std::cout << *it << std::endl;
    it = ::easyfind(test, 15);
	if (it == test.end())
		std::cout << "Occurence not found !" << std::endl;
	else
    	std::cout << *it << std::endl;

	return (0);
}