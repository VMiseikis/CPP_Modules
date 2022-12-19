/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:18:45 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/03/24 16:18:46 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					fixedPointNbr;
		static const int	fractionalBit = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &obj);
		~Fixed();
		
		Fixed &operator=(const Fixed &value);
		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &outStream, const Fixed &value);

#endif
