/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:17:02 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/05 17:08:34 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//						CONSTRUCTORS and DESTRUCTORS

WrongAnimal::WrongAnimal(): type("Unknown_Wrong_Animal")
{
	std::cout << "Wrong_Animal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string value): type(value)
{
	std::cout << "Wrong_Animal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << "Wrong_Animal copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong_Animal destructor called." << std::endl;
}

//							GET and SET

void	WrongAnimal::setType(std::string value)
{
	this->type = value;
}

std::string	WrongAnimal::getType() const	{ return (this->type); }

//							OVERLOAD

const WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
		setType(src.getType());
	return (*this);
}

//							FUNCTIONS

std::string	WrongAnimal::makeSound() const	{ return ("unidentified sound"); }
