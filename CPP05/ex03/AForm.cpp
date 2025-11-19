/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:22:34 by aharder           #+#    #+#             */
/*   Updated: 2025/11/19 15:01:37 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low !");
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high !");
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return ("Form is not signed !");
}

AForm::AForm(): _name("noob"), _signed(false), _grade_to_sign(150), _grade_to_exec(150)
{
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_exec): _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
}

AForm::~AForm()
{
}

int AForm::getGradeToExec()
{
    return (_grade_to_exec);
}

int AForm::getGradeToSign()
{
    return (_grade_to_sign);
}

bool AForm::getSignedStatus()
{
    return (_signed);
}

std::string AForm::getName()
{
    return (_name);
}

void    AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= _grade_to_sign)
    {
        std::cout << "Form " << getName() << " has been signed" << std::endl;
        _signed = true;
    }
    else
        throw GradeTooLowException();
}

void    AForm::execute(Bureaucrat const &b)
{
    if (getSignedStatus() != true)
        throw FormNotSignedException();
    if (b.getGrade() <= _grade_to_exec)
        ExecuteProcedure();
}

std::ostream& operator<<(std::ostream &out, AForm &f)
{
    out << "name: " << f.getName() << ", is signed: " << f.getSignedStatus() << ", Grade to sign: " << f.getGradeToSign() << ", Grade to execute: "<< f.getGradeToExec() << std::endl;
    return (out);
}