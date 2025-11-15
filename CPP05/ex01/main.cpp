/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:38:20 by aharder           #+#    #+#             */
/*   Updated: 2025/11/15 19:03:33 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

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
    Form    noob_form;
    Form    pro_form("pro", 75, 75);
    Form    cheater_form("cheater", 1, 1);

    std::cout << noob_form;
    std::cout << pro_form;
    std::cout << cheater_form;
    Marc.signForm(noob_form);
    Marc.signForm(pro_form);
    Marc.signForm(cheater_form);
    std::cout << noob_form;
    std::cout << pro_form;
    std::cout << cheater_form;
    Jacques.signForm(cheater_form);
    std::cout << noob_form;
    std::cout << pro_form;
    std::cout << cheater_form;
}