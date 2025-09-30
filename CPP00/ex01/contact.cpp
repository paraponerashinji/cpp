/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 01:05:58 by aharder           #+#    #+#             */
/*   Updated: 2025/09/30 01:18:31 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact()
{
}

contact::contact(std::string first_name, std::string last_name, std::string nickname, std::string number, std::string secret)
{
    contact::first_name = first_name;
	contact::last_name = last_name;
	contact::nickname = nickname;
	contact::number = number;
	contact::secret = secret;
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