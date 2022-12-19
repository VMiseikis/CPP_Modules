/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:02:26 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/05 17:25:31 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//						CONSTRUCTORS and DESTRUCTORS

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &src) : AMateria() { *this = src; }

Cure::~Cure() {}

//							OVERLOAD

const Cure &Cure::operator=(const Cure &src)
{
	if (this != &src)
		setType(src.getType());
	return (*this);
}

//							FUNCTIONS

Cure	*Cure::clone() const { return (new Cure(*this)); }

void	Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
