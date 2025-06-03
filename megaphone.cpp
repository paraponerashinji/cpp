/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:23:19 by aharder           #+#    #+#             */
/*   Updated: 2025/06/03 14:15:52 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <string>
#include <iostream>

int main(int argc, char *argv[])
{
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    for (int i = 1; i < argc; ++i)
    {
        for (char *c = argv[i]; *c; c++)
        {
            std::cout << (char)std::toupper(*c);
        }
    }
    std::cout.put('\n');
    return (0);
}