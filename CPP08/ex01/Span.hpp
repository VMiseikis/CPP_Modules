/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:00:56 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/06/02 17:13:02 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned	int		_size;
		std::vector<int>	_span;
	
	public:
		Span(unsigned int size);
		Span(const Span &src);
		~Span();

		unsigned	int		getSize() const;
		std::vector<int>&	getSpan();
		void setSpan(int const nbr);
		void setSpanAt(unsigned int i, int const nbr);

		const Span &operator=(const Span &src);

		class SpanIsFullException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("Span is full. Cannot add more numbers to it");
				}
		};
		class NoSpanFoundException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("No span found");
				}
		};

		void addNumber(int const nbr);
		void addMultipleNumbers(std::vector<int>::iterator src_b, std::vector<int>::iterator src_e);
		long shortestSpan();
		long longestSpan();
};

#endif
