/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:19:10 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/08/14 19:23:17 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(0, 0);
	Point b(0, 10);
	Point c(20, 0);

	Point p1(0, 0);
	if (bsp(a, b, c, p1) == true)
		std::cout << "Point (" << p1.getX() << "; " << p1.getY() << ") is in triangle." << std::endl;
	else
		std::cout << "Point (" << p1.getX() << "; " << p1.getY() << ") is not in triangle." << std::endl;

	std::cout << std::endl;
	Point p2(5.5, 4.5);
	if (bsp(a, b, c, p2) == true)
		std::cout << "Point (" << p2.getX() << "; " << p2.getY() << ") is in triangle." << std::endl;
	else
		std::cout << "Point (" << p2.getX() << "; " << p2.getY() << ") is not in triangle." << std::endl;


	std::cout << std::endl;
	Point p3(0, 5);
	if (bsp(a, b, c, p3) == true)
		std::cout << "Point (" << p3.getX() << "; " << p3.getY() << ") is in triangle." << std::endl;
	else
		std::cout << "Point (" << p3.getX() << "; " << p3.getY() << ") is not in triangle." << std::endl;

	return (0);
}
