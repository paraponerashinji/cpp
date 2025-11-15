/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:20:59 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/15 15:46:51 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat(): Animal("Cat")
{
    this->brain = new Brain();
    std::cout << "Cat Constructor called" <<  std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
    this->brain = new Brain(*(other.brain));
    std::cout << "Cat Copy Constructor called" <<  std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        _type = other._type;
        *(this->brain) = *(other.brain);
    }
    std::cout << "Cat Copy Assignment Operator called" <<  std::endl;
    return *this;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat Destructor called" <<  std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow !" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea)
{
    this->brain->setIdea(index, idea);
}
    
std::string *Cat::getIdeas() const
{
    return this->brain->getIdeas();
}