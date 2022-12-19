/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:27:02 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/18 23:33:30 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{	
	Bureaucrat clerk1("Bob", 10);
	Bureaucrat clerk2("Steve", 150);

	std::cout << "------------------------------" << std::endl;

	Form form1("Form_1", 50, 10);
	Form form2("Form_2", 10, 10);
	Form form3 = form1;	
	Form form4;
	
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;
	std::cout << form4 << std::endl;

	std::cout << "------------------------------" << std::endl;

	Form form5("Form_5", 200, 10);
	Form form6("Form_6", 0, 10);

	Form form7("Form_7", 10, 200);
	Form form8("Form_8", 10, 0);

	std::cout << "------------------------------" << std::endl;

	clerk2.signForm(form1);
	clerk1.signForm(form1);
	clerk2.signForm(form1);

	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;

	std::cout << "------------------------------" << std::endl;
	
	return (0);	
}
