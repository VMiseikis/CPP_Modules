/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:48:26 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/25 22:10:13 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <class T>
void swap(T& x,T& y)
{
     T temp;
     temp = x;
     x = y;
     y = temp;
}

template <class T>
const T& min (const T& a, const T& b) { return !(b < a) ? a : b; }

template <class T>
const T& max (const T& a, const T& b) { return (a < b) ? b : a; }

#endif
