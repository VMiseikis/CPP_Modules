/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:20:10 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/03/22 16:39:12 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my " <<
					"7XL-double-cheese-triple-pickle-special-ketchup burger. " <<
					"I really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. " <<
					"You didn’t put enough bacon in my burger! If you did, " <<
					"I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. " <<
					"I’ve been coming for years whereas you started working " <<
					"here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{

	field[0] = "DEBUG";
	field[1] = "INFO";
	field[2] = "WARNING";
	field[3] = "ERROR";
}

void	Harl::complain(std::string level)
{
	int i;
	for (i = 0; i < 4 && level != field[i]; i++){}
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			debug();
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			info();
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			warning();
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
