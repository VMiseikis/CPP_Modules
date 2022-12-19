/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:53:25 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/15 23:21:19 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//						CONSTRUCTORS and DESTRUCTORS

Character::Character(): _name("unknown")
{
    for (int i = 0; i < _size; i++)
        _inventory[i] = NULL;
}

Character::Character(const std::string name): _name(name)
{
    for (int i = 0; i < _size; i++)
        _inventory[i] = NULL;
}

Character::Character(const Character &src) { *this = src; }

Character::~Character()
{
    for (int i = 0; i < _size; i++)
        if (_inventory[i])
            delete _inventory[i];
}

//							OVERLOAD

const Character &Character::operator=(const Character &src)
{
	if (this != &src)
	{
		_name = src._name;
		for (int i = 0; i< _size; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (src._inventory[i])
				_inventory[i] = src._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

//							GET and SET

std::string const &Character::getName() const { return (_name); }

//							FUNCTIONS

void    Character::use(int idx, ICharacter &target)   
{
    if (idx >= 0 && idx < _size && _inventory[idx])
		_inventory[idx]->use(target);
	else
        std::cout << this->getName() << " does nothing, cause he can't remember any spell" << std::endl;
}

void	Character::equip(AMateria *m)
{
    if (m == NULL)
        return ;

	for (int i = 0; i < _size; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            std::cout << getName() << " has memorised " << _inventory[i]->getType() << " spell" << std::endl;
            return ;
        }
    }
    std::cout << getName() << " cannot memorise " << m->getType() << " spell. His memory s full" << std::endl;
    delete m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < _size)
    {
        std::cout << getName() << " forgot " << _inventory[idx]->getType() << " spell" << std::endl;
		lst_add_front(_inventory[idx]);
        _inventory[idx] = NULL;
    }
}
