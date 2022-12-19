/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:20:57 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/05 17:08:23 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//						CONSTRUCTORS and DESTRUCTORS

WrongCat::WrongCat()
{
	setType("Wrong_Cat");
	std::cout << "Wrong_Cat default constructor called." << std::endl;
}

WrongCat::WrongCat(std::string value)
{
	setType(value);
	std::cout << "Wrong_Cat constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
	std::cout << "Wrong_Cat copy constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong_Cat destructor called." << std::endl;
}

//							OVERLOAD

const WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
		setType(src.getType());
	return (*this);
}

//							FUNCTIONS

std::string	WrongCat::makeSound() const	{ return ("wrong miau"); }
