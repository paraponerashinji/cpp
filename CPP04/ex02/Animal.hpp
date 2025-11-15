/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:15:20 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/15 15:44:54 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class AAnimal {
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(std::string type);
        virtual ~AAnimal();
        virtual void makeSound() const = 0;
        std::string getType() const;
};
#endif