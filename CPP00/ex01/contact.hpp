/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:25:59 by aharder           #+#    #+#             */
/*   Updated: 2025/09/30 01:18:25 by aharder          ###   ########.fr       */
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
    contact();
    contact(std::string first_name, std::string last_name, std::string nickname, std::string number, std::string secret);
    ~contact();
};
