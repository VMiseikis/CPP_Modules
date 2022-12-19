/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:01:32 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/04/21 19:35:49 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//						CONSTRUCTORS and DESTRUCTORS

FragTrap::FragTrap(void) : ClapTrap("Default Frag")
{
    std::cout << getName() << " - FragTrap default constructor was called." << " << FRAG" << std::endl;
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << getName() << " - FragTrap constructor was called." << " << FRAG" << std::endl;
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
    *this = src;
    std::cout << getName() << " - FragTrap copy constructor was called." << " << FRAG" << std::endl;

}

FragTrap::~FragTrap()
{
    std::cout << getName() << " - FragTrap destructor was called." << " << FRAG" << std::endl;
}

//							OVERLOAD

const FragTrap &FragTrap::operator=(const FragTrap &src)
{
    setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return *this;
}

//							FUNCTIONS

void  FragTrap::highFivesGuys(void)
{
    if (getHitPoints() <= 0)
    {
        std::cout << getName() << " is already dead and cannot give High Five to anyone!" << " << FRAG" << std::endl;
        return;
    }
    if (getEnergyPoints() <= 0)
    {
        std::cout << getName() << " is so tired that it cannot even lift its hand to give High Five." << " << FRAG" << std::endl;
        return;
    }
    std::cout << getName() << " gives High Five!" << " << FRAG" << std::endl;
}
