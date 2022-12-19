/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:12:24 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/15 21:01:34 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//						CONSTRUCTORS and DESTRUCTORS

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
	generateIdeas();
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

//							GET and SET

void	Brain::setIdea(int nbr, std::string str)
{
	if (nbr >=0 && nbr < 100)
		_ideas[nbr] = str;
}

std::string Brain::getIdea(int nbr)
{
	if (nbr >=0 && nbr < 100)
	{
		std::cout << "(Ideas address: " << &_ideas[nbr] << ") ";
		return (_ideas[nbr]);
	}
	return ("");
}

//							OVERLOAD

Brain &Brain::operator=(Brain const &src)
{
	if (this != &src)
		for (int i = 0; i < 100; i++)
			_ideas[i] = src._ideas[i];
	return (*this);
}

//							FUNCTIONS

void	Brain::generateIdeas()
{
	std::stringstream str;
	
	for (int i = 0; i < 100; i++)
	{	
		str << i;
		_ideas[i] = "default idea nr.: " + str.str();
		str.str(std::string());
	}
}
