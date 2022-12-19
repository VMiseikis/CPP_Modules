/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:27:02 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/19 17:34:11 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

void test()
{
	Form* form1;
	Intern intern1;
	Bureaucrat clerk1("Bob", 1);
	Bureaucrat clerk2("Steve", 150);

	std::cout << "------------------------------" << std::endl;
	
	form1 = intern1.makeForm("Shrubbery_Creation_Form", "Tree");
	if (form1)
	{
		clerk1.signForm(*form1);
		clerk2.signForm(*form1);
		form1->execute(clerk1);
		delete (form1);
	}
	
	std::cout << "------------------------------" << std::endl;
	
	form1 = intern1.makeForm("Robotomy_Request_Form", "Robo");
	if (form1)
	{
		clerk2.signForm(*form1);
		clerk1.signForm(*form1);
		form1->execute(clerk1);
		delete (form1);
	}

	std::cout << "------------------------------" << std::endl;

	form1 = intern1.makeForm("Presidential_Pardon_Form", "Mercy");
	if (form1)
	{
		clerk1.signForm(*form1);
		form1->execute(clerk2);
		form1->execute(clerk1);
		delete (form1);
	}

	std::cout << "------------------------------" << std::endl;

	form1 = intern1.makeForm("Unknown", "Random");
	if (form1)
	{
		clerk1.signForm(*form1);
		form1->execute(clerk1);
		form1->execute(clerk2);
		delete (form1);
	}

	std::cout << "------------------------------" << std::endl;

}

int main()
{
	test();
	return (0);	
}
