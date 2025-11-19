/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:38:20 by aharder           #+#    #+#             */
/*   Updated: 2025/11/19 19:07:13 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

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

    // FORM AND INTERN
    
    Intern Kevin;
    AForm *form = Kevin.makeform("robotomy request", "evaluator");
    try
    {
        form = Kevin.makeform("invalid request", "idk");
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        form->beSigned(Jacques);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        form->execute(Jacques);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    delete form;
}