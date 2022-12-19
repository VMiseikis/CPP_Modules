/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:13:31 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/05 17:07:20 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//						CONSTRUCTORS and DESTRUCTORS

Dog::Dog()
{
	setType("Dog");
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(std::string value)
{
	setType(value);
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog &src)
{
	*this = src;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

//							OVERLOAD

const Dog &Dog::operator=(const Dog &src)
{
	if (this != &src)
		setType(src.getType());
	return (*this);
}

//							FUNCTIONS

std::string	Dog::makeSound() const	{ return ("au"); }
