/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:12:21 by aharder           #+#    #+#             */
/*   Updated: 2025/11/15 18:33:03 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
    std::string const   _name;
    int                 _grade;
public:
    Bureaucrat(std::string const name, int grade);
    ~Bureaucrat();
    void        decrementGrade();
    void        incrementGrade();
    int     getGrade();
    std::string getName();
    class GradeTooHighException: public std::exception
    {
        const char* what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream &out, Bureaucrat &b);
#endif