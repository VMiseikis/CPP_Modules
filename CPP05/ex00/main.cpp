/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:27:02 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/08/04 22:35:25 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "------------------------------" << std::endl;
	
	Bureaucrat clerk1("Bob", 2);
	Bureaucrat clerk2("Kent", 149);
	Bureaucrat clerk3 = clerk1;
	Bureaucrat clerk4;
	
	std::cout << clerk1 << std::endl;
	std::cout << clerk2 << std::endl;
	std::cout << clerk3 << std::endl;
	std::cout << clerk4 << std::endl;

	std::cout << "------------------------------" << std::endl;

	Bureaucrat clerk5("Steve", 500);
	Bureaucrat clerk6("Steve", 0);
	
	std::cout << "------------------------------" << std::endl;
	
	clerk1.incrementGrade();
	clerk1.incrementGrade();
	std::cout << clerk1 << std::endl;
	
	std::cout << "------------------------------" << std::endl;
		
	clerk2.decrementGrade();
	clerk2.decrementGrade();
	std::cout << clerk2 << std::endl;
	
	std::cout << "------------------------------" << std::endl;

	return (0);	
}
