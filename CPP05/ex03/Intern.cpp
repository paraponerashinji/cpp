/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:06:37 by aharder           #+#    #+#             */
/*   Updated: 2025/11/19 17:17:09 by aharder          ###   ########.fr       */
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
	if (i == 4)
	{
			throw UnknownFormException();
			return ;
	}
	switch (i)
	{
	case 0:
		form = RobotomyRequestForm(target);
		break;
	case 1:
		this->info();
		break;
	case 2:
		this->warning();
		break;
	case 3:
		this->error();
		break;
	}
}