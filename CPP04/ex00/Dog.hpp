/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:13:36 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/04/24 20:55:37 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog();
		Dog(std::string value);
		Dog(const Dog &src);
		~Dog();

		const Dog &operator=(const Dog &src);

		std::string	makeSound() const;
};

#endif
