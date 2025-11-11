/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:28:48 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/03 12:37:25 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // simple individual tests
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "[single instances]" << std::endl;
    std::cout << dog->getType() << ": ";
    dog->makeSound();
    std::cout << cat->getType() << ": ";
    cat->makeSound();
    std::cout << "Animal: ";
    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;

    // polymorphic array test
    const int N = 4;
    Animal* animals[N];
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