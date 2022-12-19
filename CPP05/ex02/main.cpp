/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:27:02 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/19 17:35:01 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat clerk1("Bob", 150);
	Bureaucrat clerk2("Steve", 1);

	std::cout << "------------------------------" << std::endl;
	
	ShrubberyCreationForm form1("Form_1");
	ShrubberyCreationForm form2 = form1;
	std::cout << "Target test of the copy constructor: " << form2.getTarget() << std::endl;
	ShrubberyCreationForm form3;

	RobotomyRequestForm form4("Form_4");
	RobotomyRequestForm form5 = form4;
	std::cout << "Target test of the copy constructor: " << form4.getTarget() << std::endl;
	RobotomyRequestForm form6;

	PresidentialPardonForm form7("Form_7");
	PresidentialPardonForm form8 = form7;
	std::cout << "Target test of the copy constructor: " << form7.getTarget() << std::endl;
	PresidentialPardonForm form9;

	std::cout << "------------------------------" << std::endl;
	
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;
	std::cout << form4 << std::endl;
	std::cout << form5 << std::endl;
	std::cout << form6 << std::endl;
	std::cout << form7 << std::endl;
	std::cout << form8 << std::endl;
	std::cout << form9 << std::endl;
	
	std::cout << "------------------------------" << std::endl;
	
	clerk1.signForm(form1);
	form1.execute(clerk1);
	clerk2.signForm(form1);
	form1.execute(clerk1);
	form1.execute(clerk2);

	std::cout << "------------------------------" << std::endl;
	
	clerk1.signForm(form4);
	form4.execute(clerk1);
	clerk2.signForm(form4);
	form4.execute(clerk1);
	form4.execute(clerk2);

	std::cout << "------------------------------" << std::endl;

	clerk1.signForm(form7);
	form7.execute(clerk1);
	clerk2.signForm(form7);
	form7.execute(clerk1);
	form7.execute(clerk2);
	
	std::cout << "------------------------------" << std::endl;
	return (0);	
}
