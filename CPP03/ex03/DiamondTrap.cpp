/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:01:59 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/04/21 20:52:52 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//						CONSTRUCTORS and DESTRUCTORS

DiamondTrap::DiamondTrap(void) : ClapTrap("Default DiamondTrap_clap_name"), name("Default DiamondTrap")
{
    std::cout << ScavTrap::getName() << " - DiamondTrap default constructor was called." << std::endl;
	setHitPoints(FragTrap::getHitPoints());
    setEnergyPoints(ScavTrap::getEnergyPoints());
    setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name(name)
{
    std::cout << getName() << " - DiamondTrap constructor was called" << std::endl;
    setHitPoints(FragTrap::getHitPoints());
   	setEnergyPoints(ScavTrap::getEnergyPoints());
    setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    *this = src;
    std::cout << getName() << " - DiamondTrap copy constructor was called." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << ScavTrap::getName() << " - DiamondTrap destructor was called." << std::endl;
}

//								GET and SET

std::string DiamondTrap::getName() const
{
    return (this->name);
}

//							OVERLOAD

const DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return *this;
}

//							FUNCTIONS

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond Class Object name: " << getName() << std::endl;
	std::cout << "Base ClapTrap Class Object name: " << ClapTrap::getName() << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}
