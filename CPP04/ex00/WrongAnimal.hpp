/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:16:59 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/15 15:16:10 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal(std::string value);
		WrongAnimal(const WrongAnimal &src);
		virtual	~WrongAnimal();

		const WrongAnimal &operator=(const WrongAnimal &src);

		void		setType(std::string value);
		std::string	getType() const;

		std::string	makeSound() const;
};

#endif
