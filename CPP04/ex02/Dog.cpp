/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:13:31 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/15 21:02:09 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//						CONSTRUCTORS and DESTRUCTORS

Dog::Dog() : _brain(new Brain())
{
	setType("Dog");
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(std::string value) : _brain(new Brain())
{
	setType(value);
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog &src) : _brain(new Brain(*src._brain))
{
	setType(src.getType());
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete _brain;
}

//							GET and SET

std::string Dog::getIdea(int nbr)
{
	return (_brain->getIdea(nbr));
}

void Dog::setIdea(int nbr, std::string str)
{
	_brain->setIdea(nbr, str);
}

//							OVERLOAD

Dog &Dog::operator=(Dog const &src)
{
	if (this != &src)
	{
		setType(src.getType());
		*_brain = *src._brain;
	}
	return (*this);
}

//							FUNCTIONS

std::string	Dog::makeSound() const	{ return ("au"); }
