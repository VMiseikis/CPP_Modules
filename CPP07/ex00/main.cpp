/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:48:16 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/25 22:10:24 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
	int a = 11;
	int b = 99;
	std::string c = ".....";
	std::string d = "*****";
		
	std::cout << std::endl;
	std::cout << "Declared values:   a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "Values after swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::cout << std::endl;
	std::cout << "Declared values:   c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "Values after swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	std::cout << std::endl;
	return (0);;
}
