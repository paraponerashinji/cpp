/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:26:06 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/15 15:46:09 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
    this->brain = new Brain();
    std::cout << "Dog Constructor called" <<  std::endl;
}

Dog::Dog(const Dog &other): AAnimal(other)
{
    this->brain = new Brain(*(other.brain));
    std::cout << "Dog Copy Constructor called" <<  std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        _type = other._type;
        *(this->brain) = *(other.brain);
    }
    std::cout << "Dog Copy Assignment Operator called" <<  std::endl;
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog Destructor called" <<  std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof !" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea)
{
    this->brain->setIdea(index, idea);
}

std::string *Dog::getIdeas() const
{
    return this->brain->getIdeas();
}