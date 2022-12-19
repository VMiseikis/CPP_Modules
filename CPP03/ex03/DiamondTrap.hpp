/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:02:04 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/04/21 20:53:00 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string  name;

    public:
		DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &src);
		~DiamondTrap(void);

		const DiamondTrap &operator=(const DiamondTrap &src);

		void	whoAmI();
		void    attack(const std::string& target);

		std::string getName() const;
};

#endif
