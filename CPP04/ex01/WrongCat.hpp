/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:32:04 by alexandreha       #+#    #+#             */
/*   Updated: 2025/11/03 12:32:37 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        ~WrongCat();
        void makeSound() const;
};