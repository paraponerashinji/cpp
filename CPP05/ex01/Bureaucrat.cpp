/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:27:41 by aharder           #+#    #+#             */
/*   Updated: 2025/11/15 19:04:13 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low !");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high !");
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    
}

void    Bureaucrat::incrementGrade()
{
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    else
        _grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    else
        _grade++;
}

int Bureaucrat::getGrade()
{
    return (_grade);
}

void    Bureaucrat::signForm(Form &f)
{
    try
    {
        f.beSigned(*this);
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " couldnt sign " << f.getName() << " because " << e.what() << std::endl;
        return ;
    }
    std::cout << _name << " signed " << f.getName() << std::endl;
    
}

std::string Bureaucrat::getName()
{
    return (_name);
}

std::ostream& operator<<(std::ostream &out, Bureaucrat &b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return (out);
}