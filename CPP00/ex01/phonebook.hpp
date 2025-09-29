/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:23:16 by aharder           #+#    #+#             */
/*   Updated: 2025/09/29 13:45:24 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <climits>
#include <clocale>
#include <iostream>
#include <ranges>
#include <algorithm>
#include <string>

class phonebook
{
public:
    class Contact[8];
    int   phonebook_size;
    void    add();
    void    search();
    phonebook();
    ~phonebook();
};

phonebook::phonebook()
{
}

phonebook::~phonebook()
{
}
