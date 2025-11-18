/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:37:08 by aharder           #+#    #+#             */
/*   Updated: 2025/11/18 15:40:12 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <bits/stdc++.h>

RobotomyRequestForm::RobotomyRequestForm()
{
    _target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 25, 5)
{
    _target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void    RobotomyRequestForm::ExecuteProcedure()
{
    if (std::rand() % 2)
        std::cout << getTarget() << " has been robotomized" << std::endl;
    else
        std::cout  << "Robotomy failed on " << getTarget() << std::endl;
}