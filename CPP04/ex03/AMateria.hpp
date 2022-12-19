/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:47:43 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/05 17:27:00 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	
	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &src);
		virtual ~AMateria();
		
		const AMateria &operator=(const AMateria &src);
		
		const std::string &getType() const;
		void	setType(const std::string value);
		
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
