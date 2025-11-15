/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:17:09 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/15 15:45:56 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "brain.hpp"

class Dog : public AAnimal {
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