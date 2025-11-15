/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:28:48 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/15 15:51:35 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <errno.h>
#include <stdio.h>
#include "Animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    //const AAnimal* meta = new AAnimal();
	//delete meta; IF YOU REMOVE THE COMMENTARY IT CANT COMPILE BECAUSE THE CLASS IS ABSTRACT
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();

    std::cout << "[single instances]" << std::endl;
    std::cout << dog->getType() << ": ";
    dog->makeSound();
    std::cout << cat->getType() << ": ";
    cat->makeSound();

    delete dog;
    delete cat;

    // polymorphic array test
    const int N = 4;
    AAnimal* animals[N];
    for (int i = 0; i < N; ++i)
    {
        if (i < N / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n[array of Animals]" << std::endl;
    for (int i = 0; i < N; ++i)
    {
        std::cout << animals[i]->getType() << ": ";
        animals[i]->makeSound();
    }

    for (int i = 0; i < N; ++i)
        delete animals[i];
        // WrongAnimal / WrongCat tests
    std::cout << "\n[WrongAnimal tests]" << std::endl;
        const WrongAnimal* wrongMeta = new WrongAnimal();
        const WrongAnimal* wrongCat = new WrongCat();

        std::cout << wrongMeta->getType() << ": ";
        wrongMeta->makeSound();
        std::cout << wrongCat->getType() << ": ";
        wrongCat->makeSound();

        delete wrongMeta;
        delete wrongCat;

        // direct instance test for WrongCat
        std::cout << "\n[WrongCat direct instance]" << std::endl;
        WrongCat stackWrongCat;
        std::cout << stackWrongCat.getType() << ": ";
        stackWrongCat.makeSound();
    return 0;
}