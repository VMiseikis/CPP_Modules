/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:00:56 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/04/20 14:03:52 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{  
    ClapTrap    trap1("Clap1");
    ClapTrap    trap2("Clap2");
    ClapTrap    trap3(trap1);
	
	std::cout << std::endl;
	{
		trap1.showInfo();
		trap1.attack("adventurer");
		for (int i = 0; i < 10; i++)
		{
			trap1.takeDamage(1);
		}
		trap1.showInfo();
		trap1.attack("adventurer");
		trap1.beRepaired(1);
		trap1.takeDamage(1);
	}
	
	std::cout << std::endl;

	{
		trap2.showInfo();
		for (int i = 0; i < 5; i++)
		{
			trap2.attack("adventurer");
		}
		trap2.showInfo();
		for (int i = 0; i < 5; i++)
		{
			trap2.beRepaired(1);
		}
		trap2.showInfo();
		trap2.attack("adventurer");
		trap2.beRepaired(1);
		trap2.takeDamage(1);
	}
	
	std::cout << std::endl;
    return (0);
}
