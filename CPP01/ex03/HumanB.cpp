/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:19:27 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/03/22 16:27:22 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):name(name), weapon(NULL){}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << name <<  " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon, therefore he casts hadouken" << std::endl;
}
