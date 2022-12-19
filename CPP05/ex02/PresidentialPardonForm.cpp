/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:44:22 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/19 00:14:49 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//						CONSTRUCTORS and DESTRUCTORS

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential_Pardon_Form", 25, 5), _target("unknow") {}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("Presidential_Pardon_Form", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src), _target(src.getTarget()) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

//							GET and SET

std::string PresidentialPardonForm::getTarget() const { return (_target); }

//							OVERLOAD

const PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	(void) src;
	return (*this);
}

//							FUNCTIONS

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (Form::beExecuted(executor) == true)
	{
		std::cout << executor.getName() << " executed " << getName() << std::endl;
		std::cout << getTarget() << " was pardoned by Zaphod Beeblebrox\n";
	}
}
