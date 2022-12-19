/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:01:38 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/04/21 19:39:53 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{     
    FragTrap    trap1;
    FragTrap    trap2("Frag1");
	FragTrap    trap3("Frag2");
    ScavTrap    trap4("Scav1");
	
	std::cout << std::endl;
	{
		trap1.showInfo();
		trap1.highFivesGuys();
		trap1.attack("adventurer");
		for (int i = 0; i < 10; i++)
		{
			trap1.takeDamage(10);
		}
		trap1.showInfo();
		trap1.highFivesGuys();
		trap1.attack("adventurer");
		trap1.beRepaired(1);
		trap1.takeDamage(1);
	}

    std::cout << std::endl;

	{
		trap2.showInfo();
		trap2.highFivesGuys();
		for (int i = 0; i < 50; i++)
		{
			trap2.attack("adventurer");
		}
		trap2.showInfo();
		for (int i = 0; i < 50; i++)
		{
			trap2.beRepaired(1);
		}
		trap2.showInfo();
		trap2.highFivesGuys();
		trap2.attack("adventurer");
		trap2.beRepaired(1);
		trap2.takeDamage(1);
	}

    std::cout  << std::endl;

	{
		trap3.attack("adventurer");
		trap4.attack("adventurer");
	}
	std::cout  << std::endl;
	
    return (0);
}
