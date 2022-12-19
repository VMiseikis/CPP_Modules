/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:01:19 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/04/22 13:38:35 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//						CONSTRUCTORS and DESTRUCTORS

ScavTrap::ScavTrap(void) : ClapTrap("Default Scav")
{
    std::cout << getName() << " - ScavTrap default constructor was called." << " << SCAV" << std::endl;
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << getName() << " - ScavTrap constructor was called." << " << SCAV" << std::endl;
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    *this = src;
    std::cout << getName() << " - ScavTrap copy constructor was called." << " << SCAV" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << getName() << " - ScavTrap destructor was called." << " << SCAV" << std::endl;
}

//								GET and SET

int ScavTrap::getEnergyPoints() const
{
    return (50);
}

//							OVERLOAD

const ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return *this;
}

//							FUNCTIONS

void    ScavTrap::attack(const std::string& target)
{
    if (getHitPoints() <= 0)
    {
        std::cout << getName() << " is already dead and cannot attack!" << " << SCAV" << std::endl;
        return;
    }

    if (getEnergyPoints() <= 0)
    {
        std::cout << getName() << " is so tired that it cannot even lift a finger for an attack." << " << SCAV" <<  std::endl;
        return;
    }
    std::cout << getName() << " attacked " << target << " and did " << getAttackDamage() << " points of damage! ";
    std::cout << getName() << " lost 1 energy point while attacking " << target << "!" <<  " << SCAV" << std::endl;
    setEnergyPoints(getEnergyPoints() - 1);
    return;
}

void  ScavTrap::guardGate()
{
    if (getHitPoints() <= 0)
    {
        std::cout << getName() << " is already dead and cannot enter Gate Keeper mode!" << " << SCAV" <<  std::endl;
        return;
    }
    if (getEnergyPoints() <= 0)
    {
        std::cout << getName() << " is so tired that it cannot even enter Gate Keeper mode." << " << SCAV" << std::endl;
        return;
    }
    std::cout << getName() << " entered Gate Keeper mode!" << " << SCAV" <<  std::endl;
}
