/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:02:12 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/04/21 21:25:05 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{    
   	DiamondTrap trap1("Diamond1");
	DiamondTrap trap2("Diamond2");
	DiamondTrap trap3;

	std::cout << std::endl;
	{
	 	trap1.showInfo();
		trap1.whoAmI();
		trap1.attack("adventurer");
		trap1.takeDamage(10);
		trap1.beRepaired(1);
		trap1.guardGate();
		trap1.highFivesGuys();
		trap1.showInfo();
	}

	std::cout << std::endl;
	
	{
		trap2.showInfo();
		trap2.whoAmI();
		trap2.attack("adventurer");
		trap2.takeDamage(100);
		trap2.beRepaired(10);
		trap2.guardGate();
		trap2.highFivesGuys();
		trap2.showInfo();
	}

	std::cout << std::endl;

	{
		trap3.whoAmI();
		trap3 = trap1;
		trap3.whoAmI();
	}
	std::cout << std::endl;

    return (0);
}
