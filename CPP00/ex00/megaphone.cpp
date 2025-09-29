/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:10:29 by aharder           #+#    #+#             */
/*   Updated: 2025/09/29 13:21:59 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <climits>
#include <clocale>
#include <iostream>
#include <ranges>
#include <algorithm>
#include <string>

int main(int argc, char *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; i++)
    {
        std::string to_print(argv[i]);
        std::transform(to_print.begin(), to_print.end(), to_print.begin(), ::toupper);
        std::cout << to_print;
    }
    std::cout << "\n";
}