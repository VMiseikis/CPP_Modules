/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:19:04 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/08/02 20:03:38 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* horde = NULL;
	horde = horde->zombieHorde(5, "Facebook Lurker");
	for (int i = 0; i < 5; i++)
		horde[i].announce();

	delete [] horde;
	return (0);
}
