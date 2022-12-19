/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:13:36 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/15 21:03:14 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog: virtual public Animal
{
	private:
		Brain* _brain;

	public:
		Dog();
		Dog(std::string value);
		Dog(const Dog &src);
		~Dog();

		Dog &operator=(Dog const &src);

		std::string	makeSound() const;

		void		setIdea(int nbr, std::string str);
		std::string getIdea(int nbr);
};

#endif
