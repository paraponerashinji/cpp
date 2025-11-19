/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:06:37 by aharder           #+#    #+#             */
/*   Updated: 2025/11/19 19:04:59 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{   
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern &other)
{
	(void)other;
	return *this;
}

const char *Intern::UnknownFormException::what() const throw()
{
    return ("Form does not exist !");
}

AForm *Intern::makeform(std::string name, std::string target)
{
    std::string forms[3] = { "robotomy request", "presidential pardon", "shrubbery creation" };
    AForm *form;
	int i = 0;
	while (i < 3)
	{
		if (name == forms[i])
			break;
		i++;
	}
	if (i == 3)
	{
			throw UnknownFormException();
	}
	std::cout << "Intern creates " << name << std::endl; 
	switch (i)
	{
	case 0:
		form = new RobotomyRequestForm(target);
		break;
	case 1:
		form = new PresidentialPardonForm(target);
		break;
	case 2:
		form = new ShrubberyCreationForm(target);
		break;
	}
	return (form);
}