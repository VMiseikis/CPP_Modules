/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:01:35 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/06 15:49:01 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//						CONSTRUCTORS and DESTRUCTORS

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &src) : AMateria() { *this = src; }

Ice::~Ice() {}

//							OVERLOAD

const Ice &Ice::operator=(const Ice &src)
{
	if (this != &src)
		setType(src.getType());
	return (*this);
}

//							FUNCTIONS

Ice	*Ice::clone() const { return (new Ice(*this)); }

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
