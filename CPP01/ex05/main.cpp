/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharder <aharder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 04:18:40 by aharder           #+#    #+#             */
/*   Updated: 2025/09/30 04:20:15 by aharder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("debug");
	harl.complain("prout");
	harl.complain("info");
	harl.complain("error");
	harl.complain("warning");
	return (0);
}