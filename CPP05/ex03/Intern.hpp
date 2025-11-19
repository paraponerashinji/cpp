/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:00:33 by aharder           #+#    #+#             */
/*   Updated: 2025/11/19 17:15:34 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class Intern
{
public:
    Intern();
    ~Intern();
    Intern &operator=(Intern &other);
    AForm *makeform(std::string name, std::string target);
    class UnknownFormException: public std::exception
    {
        const char* what() const throw();
    };
};
