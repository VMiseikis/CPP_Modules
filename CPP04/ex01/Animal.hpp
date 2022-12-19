/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:13:26 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/15 20:55:16 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(std::string value);
		Animal(const Animal &src);
		virtual	~Animal();

		const Animal &operator=(const Animal &src);

		void		setType(std::string value);
		std::string	getType() const;

		virtual std::string	makeSound() const;
};

#endif
