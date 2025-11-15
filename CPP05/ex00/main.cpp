/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:38:20 by aharder           #+#    #+#             */
/*   Updated: 2025/11/15 18:12:21 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    Bureaucrat Marc("Marc", 150);
    std::cout << Marc;
    Marc.decrementGrade();
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
    try
    {
        Jacques.decrementGrade();
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << Jacques;
}