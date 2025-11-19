/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:38:20 by aharder           #+#    #+#             */
/*   Updated: 2025/11/19 15:03:20 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat Jean("Jean", 100);
    }
    catch(std::string exception)
    {
        std::cerr << exception << '\n';
    }
    try
    {
        Bureaucrat Pierre("Pierre", 200);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat Jacques("Jacques", 0);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    Bureaucrat Marc("Marc", 70);
    std::cout << Marc;
    try
    {
        Marc.decrementGrade();   
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << Marc;
    try
    {
        Marc.incrementGrade();   
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << Marc;
    Bureaucrat Jacques("Jacques", 1);
    std::cout << Jacques;
    try
    {
        Jacques.incrementGrade();
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << Jacques;

    // FORM
    
    PresidentialPardonForm pardon_form("someone");
    RobotomyRequestForm robotomy_form("evaluator");
    ShrubberyCreationForm shrubbery_form("garden");

    try
    {
        shrubbery_form.beSigned(Marc);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        shrubbery_form.execute(Marc);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        shrubbery_form.beSigned(Jacques);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        shrubbery_form.execute(Jacques);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        pardon_form.beSigned(Jacques);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        pardon_form.execute(Jacques);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
     try
    {
        robotomy_form.beSigned(Jacques);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        robotomy_form.execute(Jacques);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}