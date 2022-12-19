/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:17:47 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/26 16:26:11 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <class T> void ft_print(T& src) { std::cout << src << std::endl; }

template <class T>
void iter(T *arr, size_t len, void(f)(T const &value))
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif
