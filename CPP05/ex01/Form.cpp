/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:22:34 by aharder           #+#    #+#             */
/*   Updated: 2025/11/15 18:59:48 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low !");
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high !");
}

Form::Form(): _name("noob"), _signed(false), _grade_to_sign(150), _grade_to_exec(150)
{
}

Form::Form(std::string name, int grade_to_sign, int grade_to_exec): _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
}

Form::~Form()
{
}

int Form::getGradeToExec()
{
    return (_grade_to_exec);
}

int Form::getGradeToSign()
{
    return (_grade_to_sign);
}

bool Form::getSignedStatus()
{
    return (_signed);
}

std::string Form::getName()
{
    return (_name);
}

void    Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= _grade_to_sign)
    {
        _signed = true;
    }
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, Form &f)
{
    out << "name: " << f.getName() << ", is signed: " << f.getSignedStatus() << ", Grade to sign: " << f.getGradeToSign() << ", Grade to execute: "<< f.getGradeToExec() << std::endl;
    return (out);
}