/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:00:59 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/06/02 17:26:51 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//						CONSTRUCTORS and DESTRUCTORS

Span::Span(unsigned int size) : _size(size) {}

Span::Span(const Span &src) { *this = src; }

Span::~Span() {}

//							GET and SET

unsigned int Span::getSize() const { return (_size); }

std::vector<int>& Span::getSpan() { return (_span); }

void Span::setSpan(int const nbr) { _span.push_back(nbr); }

void Span::setSpanAt(unsigned int i, int const nbr) { _span.at(i) = nbr; }

//							OVERLOAD

const Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		_size = src.getSize();
		_span = src._span;
	}
	return (*this);
}

//							FUNCTIONS

void Span::addNumber(int const nbr)
{
	try {
		if (getSpan().size() < getSize())
			setSpan(nbr);
		else
			throw (SpanIsFullException());
	}
	catch (std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
}

void Span::addMultipleNumbers(std::vector<int>::iterator src_b, std::vector<int>::iterator src_e)
{
	try
	{
		if (getSpan().size() + distance(src_b, src_e) < getSize())
			getSpan().insert(getSpan().end(), src_b, src_e);
		else
		{
			getSpan().insert(getSpan().end(), src_b, src_e - (getSpan().size() + distance(src_b, src_e) - getSize()));
			throw(SpanIsFullException());
		}
	}
	catch(std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
}

long Span::longestSpan()
{

	if (getSpan().size() <= 1)
		throw(NoSpanFoundException());
	return ((long)*std::max_element(getSpan().begin(), getSpan().end()) - (long)*std::min_element(getSpan().begin(), getSpan().end()));
}

long Span::shortestSpan()
{
	 long shortSp;
	
	if (getSpan().size() <= 1)
		throw(NoSpanFoundException());
		
	std::vector<int> tmp = getSpan();
	std::sort(tmp.begin(), tmp.end()); 

	shortSp = (long)tmp.at(tmp.size() - 1) - (long)tmp.at(0);

	for (unsigned int i = 0; i < tmp.size() - 1; i++)
	{
		if ((long)tmp[i + 1] - (long)tmp[i] < shortSp)
			shortSp = (long)tmp[i + 1] - (long)tmp[i];
	}
			
	return (shortSp);
}
