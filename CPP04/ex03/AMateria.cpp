/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:47:28 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/15 21:43:22 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

//						CONSTRUCTORS and DESTRUCTORS

AMateria::AMateria() : _type("Unknwon") {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria &src) { *this = src; }

AMateria::~AMateria() {}

//							OVERLOAD

const	AMateria &AMateria::operator=(const AMateria &src)
{
	if (this != &src)
		setType(src.getType());
	return (*this);
}

//							GET and SET

std::string const &AMateria::getType() const		{ return (_type); }

void	AMateria::setType(const std::string value)	{ _type = value; }

//							FUNCTIONS

void	AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << " does nothing;" << std::endl;
}
