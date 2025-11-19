/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:42:31 by aharder           #+#    #+#             */
/*   Updated: 2025/11/19 14:59:01 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 25, 5)
{
    _target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 25, 5)
{
    _target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void    ShrubberyCreationForm::ExecuteProcedure()
{
    std::ofstream new_file((getTarget() + "_shrubbery").c_str());

    new_file << "  ,-,              v .   ._, |_  .," << std::endl;
    new_file << " /.(           `-._\\/  .  \\ /    |/_" << std::endl;
    new_file << " \\ {               \\  _\\, y | \\//" << std::endl;
    new_file << "  `-`         _\\_.___\\, \\/ -.\\||" << std::endl;
    new_file << "               `7-,--.`._||  / / ," << std::endl;
    new_file << "               /'     `-. `./ / |/_.'" << std::endl;
    new_file << "                         |    |//" << std::endl;
    new_file << "                         |_    /" << std::endl;
    new_file << "                         |-   |" << std::endl;
    new_file << "                         |   =|" << std::endl;
    new_file << "                         |    |" << std::endl;
    new_file << "------------------------/ ,  . \\--------._" << std::endl;
    new_file.close();
}

std::string ShrubberyCreationForm::getTarget()
{
    return _target;
}