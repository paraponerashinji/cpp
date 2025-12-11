/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:15:45 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/11 21:28:11 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.hpp"
#include <time.h>

Base   *generate()
{
    std::srand(time(NULL));
    int i = std::rand() % 3;

    switch (i)
    {
    case 0:
    {
        std::cout << "Created Type A" << std::endl;
        return new A();
    }
    case 1:
        {
        std::cout << "Created Type B" << std::endl;
        return new B();
    }
    case 2:
        {
        std::cout << "Created Type C" << std::endl;
        return new C();
    }
    default:
    {
        std::cout << "Created Type A" << std::endl;
        return new A();
    }
    }
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
    {
        std::cout << "Type A" << std::endl;
    }
    if (dynamic_cast<B*>(p))
    {
        std::cout << "Type B" << std::endl;
    }
    if (dynamic_cast<C*>(p))
    {
        std::cout << "Type C" << std::endl;
    }
}

void    identify(Base &p)
{
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "Type A" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {}
    try
    {
        dynamic_cast<B&>(p);
        std::cout << "Type B" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {}   
    try
    {
        dynamic_cast<C&>(p);
        std::cout << "Type C" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {}
}

int main()
{
    Base *p = generate();
    identify(p);
    identify(*p);
}