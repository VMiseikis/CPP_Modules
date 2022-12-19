/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:18:33 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/03/24 16:18:34 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					fixedPointNbr;
		static const int	fractionalBit = 8;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		~Fixed();
		
		Fixed &operator=(const Fixed &kitas);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
