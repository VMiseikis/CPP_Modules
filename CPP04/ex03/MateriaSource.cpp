/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:40:56 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/15 22:08:13 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//						CONSTRUCTORS and DESTRUCTORS

MateriaSource::MateriaSource()
{
    for (int i = 0; i < _size; i++)
        _inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src) { *this = src; }

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < _size; i++)
        if (_inventory[i])
            delete _inventory[i];
}

//							OVERLOAD

const MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
    if (this != &src)
    {
        for (int i = 0; i < _size; i++)
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

//							FUNCTION

void		MateriaSource::learnMateria(AMateria *m)
{
    if (m == NULL)
        return ;

    for (int i = 0; i < _size; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            std::cout << m->getType() << " spell was written in magic book" << std::endl;
            return ;
        }
    }
    std::cout << m->getType() << " could not be written in to a magic book. Book is full" << std::endl;
	delete m;
}

AMateria*   MateriaSource::createMateria(const std::string &type)
{
	if (type == "ice")
	{
		std::cout << type << " spell was created" << std::endl;
		return (new Ice());
	}
	if (type == "cure")
	{
		std::cout << type << " spell was created" << std::endl;
		return (new Cure());
	}
	std::cout << type << " spell could not be created" << std::endl;
	return (NULL);
}
