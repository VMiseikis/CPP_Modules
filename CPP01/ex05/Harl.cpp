/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:19:50 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/08/06 23:30:15 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my " <<
					"7XL-double-cheese-triple-pickle-special-ketchup burger. " <<
					"I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. " <<
					"You didn’t put enough bacon in my burger! If you did, " <<
					"I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. " <<
					"I’ve been coming for years whereas you started working " <<
					"here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
	complaint[0] = &Harl::debug;
	complaint[1] = &Harl::info;
	complaint[2] = &Harl::warning;
	complaint[3] = &Harl::error;
	field[0] = "DEBUG";
	field[1] = "INFO";
	field[2] = "WARNING";
	field[3] = "ERROR";
}

void	Harl::complain(std::string level)
{
	int i;
	for (i = 0; i < 4 && level != field[i]; i++){}
	
	if (i < 4)
		(this->*complaint[i])();
	else
		std::cout << "You just ignored Harl." <<std::endl;

}