/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:14:07 by aharder           #+#    #+#             */
/*   Updated: 2025/11/19 19:06:35 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool              _signed;
        const int         _grade_to_sign;
        const int         _grade_to_exec;
    public:
        AForm();
        virtual ~AForm();
        AForm(std::string name, int grade_to_sign, int grade_to_exec);
        std::string getName();
        bool        getSignedStatus();
        int         getGradeToSign();
        int         getGradeToExec();
        void        beSigned(Bureaucrat &b);
        void execute(Bureaucrat const &b);
        virtual void ExecuteProcedure() = 0;
        class GradeTooHighException: public std::exception
        {
            const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            const char* what() const throw();
        };
        class FormNotSignedException: public std::exception
        {
            const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream &out, AForm &f);
#endif
