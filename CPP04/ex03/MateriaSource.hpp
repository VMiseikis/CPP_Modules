/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:57:16 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/15 21:52:56 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		static const int	_size = 4;
		AMateria*			_inventory[_size];
		
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		virtual ~MateriaSource();

		const MateriaSource	&operator=(const MateriaSource &src);

		void		learnMateria(AMateria *m);
		AMateria*	createMateria(const std::string &type);
};

#endif
