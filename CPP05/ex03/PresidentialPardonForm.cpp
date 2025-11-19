/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:37:26 by aharder           #+#    #+#             */
/*   Updated: 2025/11/19 14:58:39 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
{
    _target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5)
{
    _target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void    PresidentialPardonForm::ExecuteProcedure()
{
    std::cout << getTarget() << " has been pardonned by Zafod Beeblebrox" << std::endl;
}

std::string PresidentialPardonForm::getTarget()
{
    return _target;
}