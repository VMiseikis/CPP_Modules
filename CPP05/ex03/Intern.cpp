/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:17:54 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/19 17:31:24 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//						CONSTRUCTORS and DESTRUCTORS

Intern::Intern() {}

Intern::Intern(const Intern &src) { *this = src; }

Intern::~Intern() {}

//							GET and SET

//							OVERLOAD

//							FUNCTIONS

Form *Intern::makeForm(std::string const name, std::string const target)
{
	int		idx;
	Form	*form[3];

	form[0] = new ShrubberyCreationForm(target);
	form[1] = new RobotomyRequestForm(target);
	form[2] = new PresidentialPardonForm(target);

	idx = -1;
	for (int i = 0; i < 3; i++) 
	{
		if (form[i]->getName() == name)
			idx = i;
		else
			delete form[i];			
	}
	
	if (idx >= 0)
	{
		std::cout << "Intern creates " << form[idx]->getName() << std::endl;
		return (form[idx]);
	}
	std::cout << "Intern does not know how to create " << name << " form" << std::endl;
	return (NULL);
}
