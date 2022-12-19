/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:19:48 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/08/13 19:51:49 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0.0f), y(0.0f) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point &obj) : x(obj.x), y(obj.y) {}

Point::~Point(){}

const Point &Point::operator=(const Point &other)
{
	return (other);
}

const Fixed Point::getX() const
{
	return (this->x);
}

const Fixed Point::getY() const
{
	return (this->y);
}
