/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:13:29 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/04/24 20:55:22 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat();
		Cat(std::string value);
		Cat(const Cat &src);
		~Cat();

		const Cat &operator=(const Cat &src);

		std::string	makeSound() const;
};

#endif
