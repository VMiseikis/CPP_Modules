/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:13:23 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/15 20:50:02 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//						CONSTRUCTORS and DESTRUCTORS

Animal::Animal(): _type("Unknown_Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string value): _type(value)
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

//							GET and SET

void	Animal::setType(std::string value)	{ this->_type = value; }

std::string	Animal::getType() const			{ return (this->_type); }

//							OVERLOAD

const Animal &Animal::operator=(const Animal &src)
{
	if (this != &src)
		setType(src.getType());
	return (*this);
}

//							FUNCTIONS

std::string	Animal::makeSound() const	{ return ("unidentified sound"); }
