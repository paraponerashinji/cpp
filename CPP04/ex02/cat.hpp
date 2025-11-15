/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:17:31 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/15 15:47:16 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "brain.hpp"

class Cat : public AAnimal {
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        virtual ~Cat();
        void makeSound() const;
        void setIdea(int index, const std::string &idea);
        std::string *getIdeas() const;
};