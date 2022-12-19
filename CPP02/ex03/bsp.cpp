/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:55:45 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/03/22 15:44:40 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Point p1, Point p2, Point p3)
{
	Fixed area = (p1.getX() * (p2.getY() - p3.getY())
				+ p2.getX() * (p3.getY() - p1.getY())
				+ p3.getX() * (p1.getY() - p2.getY())) / 2.0f;
	if (area < 0)
		return (area * -1);
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed A1 = area(a, b, c);
	Fixed A2 = area(point, b, c);
	Fixed A3 = area(a, point, c);
	Fixed A4 = area(a, b, point);

	if (A1 != (A2 + A3 + A4) || A2 == 0 || A3 == 0 || A4 == 0)
		return (false);
	return (true);
}