/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:13:33 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/15 21:01:54 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//						CONSTRUCTORS and DESTRUCTORS

Cat::Cat() : _brain(new Brain())
{
	setType("Cat");
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(std::string value) : _brain(new Brain())
{
	setType(value);
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat &src) : _brain(new Brain(*src._brain))
{
	setType(src.getType());
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete _brain;
}

//							GET and SET

std::string Cat::getIdea(int nbr)
{
	return (_brain->getIdea(nbr));
}

void	Cat::setIdea(int nbr, std::string str)
{
	_brain->setIdea(nbr, str);
}

//							OVERLOAD

const Cat &Cat::operator=(const Cat &src)
{	
	if (this != &src)
	{
		setType(src.getType());
		_brain = src._brain;
	}
	return (*this);
}

//							FUNCTIONS

std::string	Cat::makeSound() const	{ return ("miau"); }
