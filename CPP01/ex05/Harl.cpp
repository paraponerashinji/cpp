/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 04:04:00 by aharder           #+#    #+#             */
/*   Updated: 2025/09/30 04:23:53 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

Harl::Harl()
{

}

Harl::~Harl()
{
	
}

void	Harl::complain(std::string level)
{
	void (Harl::*ptr_func[4]) (void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string	levels[4] = { "debug", "info", "warning", "error" };

	for (int i = 0; i < 5; i++)
	{
		if (i == 4)
			std::cout << "Harl doesnt hear your complain\n";
		else if (level == levels[i])
		{
			(this->*ptr_func[i])();
			break;
		}
	}
}