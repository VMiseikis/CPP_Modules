/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:18:46 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/08/14 23:20:33 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie = Zombie("Ghoul");
	zombie.announce();

	Zombie* crawler = zombie.newZombie("Crawler");
	crawler->announce();
	crawler->~Zombie();

	zombie.randomChump("Mummy");

	return (0);
}
