/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:19:05 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/03/24 16:19:06 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPointNbr = 0;
}

Fixed::Fixed(const int value)
{
	this->fixedPointNbr = value << Fixed::fractionalBit;
}

Fixed::Fixed(const float value)
{
	this->fixedPointNbr = roundf(value * (1 << Fixed::fractionalBit));
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

Fixed::~Fixed(){}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointNbr = raw;
}

int Fixed::getRawBits(void) const
{
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

const Fixed &Fixed::operator=(const Fixed &other)
{
	this->fixedPointNbr = other.fixedPointNbr;
	return (*this);
}

std::ostream &operator<<(std::ostream &outStream, const Fixed &value)
{
	outStream << value.toFloat();
	return (outStream);
}

Fixed &Fixed::operator++()
{
	(this->fixedPointNbr)++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
   Fixed temp = *this;
   (this->fixedPointNbr)++;
   return temp;
}

Fixed &Fixed::operator--()
{
	(this->fixedPointNbr)++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
   Fixed temp = *this;
   (this->fixedPointNbr)--;
   return temp;
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (this->toFloat() / other.toFloat());
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}