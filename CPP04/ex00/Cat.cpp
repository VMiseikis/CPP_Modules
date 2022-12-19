/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:13:33 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/05 17:06:10 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//						CONSTRUCTORS and DESTRUCTORS

Cat::Cat()
{
	setType("Cat");
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(std::string value)
{
	setType(value);
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

//							OVERLOAD

const Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
		setType(src.getType());
	return (*this);
}

//							FUNCTIONS

std::string	Cat::makeSound() const { return ("miau"); }
