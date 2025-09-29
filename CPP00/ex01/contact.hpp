/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:25:59 by aharder           #+#    #+#             */
/*   Updated: 2025/09/29 13:34:05 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <climits>
#include <clocale>
#include <iostream>
#include <ranges>
#include <algorithm>
#include <string>

class contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string number;
    std::string secret;
public:
    std::string get_firstname();
    std::string get_lastname();
    std::string get_nickname();
    std::string get_number();
    std::string get_secret();
    contact(std::string first_name, std::string last_name, std::string nickname, std::string number, std::string secret);
    ~contact();
};

contact::contact(std::string first_name, std::string last_name, std::string nickname, std::string number, std::string secret)
{
    
}

contact::~contact()
{
}

std::string contact::get_firstname()
{
    return (first_name);
}

std::string contact::get_lastname()
{
    return (last_name);
}

std::string contact::get_nickname()
{
    return (nickname);
}

std::string contact::get_number()
{
    return (number);
}

std::string contact::get_secret()
{
    return (secret);
}
