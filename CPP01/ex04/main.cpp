/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:26:16 by aharder           #+#    #+#             */
/*   Updated: 2025/09/30 03:53:49 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <iomanip>
#include <cstdio>
int main(int argc, char *argv[])
{
	std::string text;

	std::cout << argc;
	if (argc != 4)
		std::cout << "Bad input\n";
	else
	{
		std::string::size_type			index = 0;
		std::string		to_replace = argv[2];
		std::string		replacement = argv[3];
		std::string		new_name =  argv[1];
		std::ifstream	file(argv[1]);
		if (file.is_open() == 0)
		{
			std::cout << "Cannot open the file !\n";
			return (1);
		}
		std::ofstream	new_file((new_name + ".replace").c_str());
		while (std::getline(file, text))
		{
			index = 0;
			while ((index = text.find(to_replace, index)) != std::string::npos)
			{
				text.erase(index, to_replace.length());
				text.insert(index, replacement);
				index += replacement.length();
			}
			new_file << text << "\n";
		}
	}
}