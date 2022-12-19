/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:57:30 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/05 17:27:53 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

# include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual	~IMateriaSource() {}
		virtual void	learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;	
};

#endif
