/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:00:35 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/04/20 14:19:49 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//						CONSTRUCTORS and DESTRUCTORS

ClapTrap::ClapTrap(void) :
	name("Default Clap"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << getName() << " - ClapTrap default constructor was called. " << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << getName() << " - ClapTrap constructor was called. " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    *this = src;
    std::cout << getName() << " - ClapTrap copy constructor was called. " << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << getName() << " - ClapTrap destructor was called. " << std::endl;
}

//								GET and SET

std::string ClapTrap::getName() const
{
    return (this->name);
}

int ClapTrap::getHitPoints() const
{
    return (this->hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
    return (this->energyPoints);
}

int ClapTrap::getAttackDamage() const
{
    return (this->attackDamage);
}

void    ClapTrap::setName(std::string value)
{
    this->name = value;
}

void    ClapTrap::setHitPoints(int value)
{
    this->hitPoints = value;
}

void    ClapTrap::setEnergyPoints(int value)
{
    this->energyPoints = value;
}

void    ClapTrap::setAttackDamage(int value)
{
    this->attackDamage = value;
}

//							OVERLOAD

const ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return *this;
}

//							FUNCTIONS

void    ClapTrap::attack(const std::string& target)
{
    if (getHitPoints() <= 0)
    {
        std::cout << getName() << " is already dead and cannot attack!" << std::endl;
        return;
    }

    if (getEnergyPoints() <= 0)
    {
        std::cout << getName() << " is so tired that it cannot even lift a finger for an attack." << std::endl;
        return;
    }
    std::cout << getName() << " attacked " << target << " and did " << getAttackDamage() << " points of damage! ";
    std::cout << getName() << " lost 1 energy point while attacking " << target << "!" << std::endl;
    setEnergyPoints(getEnergyPoints() - 1);
    return;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (getHitPoints() <= 0)
    {
        std::cout << getName() << " is already dead! There is no point to attack it!" << std::endl;
        return;
    }
    setHitPoints(getHitPoints() - amount);
    std::cout << getName() << " lost " << amount << " hit points!" << std::endl;
    if (getHitPoints() <= 0)
    {
        std::cout << getName() << " died!" << std::endl;
        return;
    }
    return;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (getHitPoints() <= 0)
    {
        std::cout << getName() << " is already dead and cannot be healed!" << std::endl;
        return;
    }
    if (getEnergyPoints() <= 0)
    {
        std::cout << getName() << " is so tired that it cannot even heal itself." << std::endl;
        return;
    }
    std::cout << getName() << " used HEAL and recovered " << amount << " hit points! ";
    std::cout << getName() << " lost 1 energy point while healing himself!" << std::endl;
    setHitPoints(getHitPoints() + amount);
    setEnergyPoints(getEnergyPoints() - 1);
    return;
}

void	ClapTrap::showInfo()
{
	std::cout << getName() << ", " << getHitPoints() << ", ";
	std::cout << getEnergyPoints() << ", " << getAttackDamage();
	std::cout << std::endl;
}
