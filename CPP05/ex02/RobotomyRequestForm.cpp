/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:44:26 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/19 00:13:56 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//						CONSTRUCTORS and DESTRUCTORS

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy_Request_Form", 72, 45), _target("unknown") {}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("Robotomy_Request_Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src), _target(src.getTarget()) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

//							GET and SET

std::string RobotomyRequestForm::getTarget() const { return (_target); }

//							OVERLOAD

const RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	(void) src;
	return (*this);
}

//							FUNCTIONS

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (Form::beExecuted(executor) == true)
	{
		std::cout << executor.getName() << " executed " << getName() << std::endl;
		
		srand((unsigned int)time(NULL));

		std::cout << "......\n";
		std::cout << "Some drilling noises\n";
		std::cout << "Processing Robotomy Request Form\n";
		std::cout << "More drilling noises\n";
		if (std::rand() % 2 == 0)
			std::cout << getTarget() << " was been robotomized successfully\n";
		else
			std::cout << getTarget() << " robotomy failed\n";
	}
}
