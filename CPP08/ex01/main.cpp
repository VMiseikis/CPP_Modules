/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:12:38 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/10/03 20:40:08 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span span_1(10000);
	Span span_2(3);
	Span span_3(5);
	
	std::cout << "-------------------------" << std::endl;
	{
		try {
			std::cout << span_1.longestSpan() << std::endl;
		}
		catch (std::exception &err)
		{
			std::cerr << err.what() << std::endl;
		}
		
		try {
			std::cout << span_1.shortestSpan() << std::endl;
		}
		catch (std::exception &err)
		{
			std::cerr << err.what() << std::endl;
		}
		
		for (unsigned int i = 0; i < span_1.getSize(); i++)
			span_1.addNumber(i * 10);

		std::cout << "Longest span: " << span_1.longestSpan() << std::endl;
		
		std::cout << "Shortest span: " << span_1.shortestSpan() << std::endl;
	}
	std::cout << "-------------------------" << std::endl;
	{
		span_2.addNumber(2147483647);
		span_2.addNumber(-2147483648);
		span_2.addNumber(0);
		
		std::cout << "Longest span: " << span_2.longestSpan() << std::endl;
		
		std::cout << "Shortest span: " << span_2.shortestSpan() << std::endl;
	}
	std::cout << "-------------------------" << std::endl;
	{

		span_3.addMultipleNumbers(span_2.getSpan().begin(), span_2.getSpan().end());
		span_3.addMultipleNumbers(span_2.getSpan().begin(), span_2.getSpan().end());
		for(unsigned int  i = 0; i< span_3.getSpan().size(); i++)
			std::cout << span_3.getSpan().at(i) << " ";
		std::cout << std::endl;

		std::cout << "Longest span: " << span_3.longestSpan() << std::endl;
		
		std::cout << "Shortest span: " << span_3.shortestSpan() << std::endl;
		
		span_3.setSpanAt(3, 1);
		span_3.setSpanAt(4, 5);

		for(unsigned int  i = 0; i< span_3.getSpan().size(); i++)
			std::cout << span_3.getSpan().at(i) << " ";
		std::cout << std::endl;

		std::cout << "Longest span: " << span_3.longestSpan() << std::endl;
		
		std::cout << "Shortest span: " << span_3.shortestSpan() << std::endl;

	}
	std::cout << "-------------------------" << std::endl;
	
	return (0);
}
