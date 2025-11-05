/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:17:09 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/03 13:57:47 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "brain.hpp"

class Dog : public Animal {
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        virtual ~Dog();
        void makeSound() const;
        void setIdea(int index, const std::string &idea);
        std::string *getIdeas() const;
};