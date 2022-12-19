/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:40:32 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/27 15:32:28 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
	private:
		T*		_arr;
		size_t 	_size;
		
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &src);
		~Array();

		const Array &operator=(const Array &src);
		T &operator[](const size_t index);
		T &operator[](const size_t index) const;

		class OutOfBoundException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("Error: index is out of bounds");
				}
		};
		
		size_t size() const;
};

#include "Array.tpp"

#endif
