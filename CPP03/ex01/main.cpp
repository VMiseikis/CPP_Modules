/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:01:13 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/04/21 19:25:58 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{     
    ScavTrap    trap1("Scav1");
	ScavTrap    trap2("Scav2");
	ScavTrap    trap3;
	ClapTrap	trap4("Clap1");

	trap3 = trap1;

	std::cout << std::endl;
	{
		trap1.showInfo();
		trap1.guardGate();
		trap1.attack("adventurer");
		for (int i = 0; i < 10; i++)
		{
			trap1.takeDamage(10);
		}
		trap1.showInfo();
		trap1.guardGate();
		trap1.attack("adventurer");
		trap1.beRepaired(1);
		trap1.takeDamage(1);
	}

    std::cout << std::endl;

	{
		trap2.showInfo();
		trap2.guardGate();
		for (int i = 0; i < 25; i++)
		{
			trap2.attack("adventurer");
		}
		trap2.showInfo();
		for (int i = 0; i < 25; i++)
		{
			trap2.beRepaired(1);
		}
		trap2.showInfo();
		trap2.guardGate();
		trap2.attack("adventurer");
		trap2.beRepaired(1);
		trap2.takeDamage(1);
	}

	std::cout << std::endl;

	{
		trap3.attack("adventurer");
		trap4.attack("adventurer");
	}

    std::cout  << std::endl;
    return (0);
}
