/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:18:42 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/03/24 16:18:43 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPointNbr = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointNbr = value << Fixed::fractionalBit;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointNbr = roundf(value * (1 << Fixed::fractionalBit));
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointNbr = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointNbr);
}

float Fixed::toFloat( void ) const
{
	return ((float)this->fixedPointNbr / (float)(1 << Fixed::fractionalBit));
}

int Fixed::toInt( void ) const
{
	return (this->fixedPointNbr >> Fixed::fractionalBit);
}

Fixed &Fixed::operator=(const Fixed &value)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointNbr = value.fixedPointNbr;
	return (*this);
}

std::ostream &operator<<(std::ostream &outStream, const Fixed &value)
{
	outStream << value.toFloat();
	return (outStream);
}
