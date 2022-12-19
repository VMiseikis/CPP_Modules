/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:13:21 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/16 21:38:09 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	int	count = 4;

	Animal	*animals[count];
	Dog		dog1;
	Dog		dog2;

	std::cout << std::endl;
	
	for (int i = 0; i < count; i++)
	{
		if (i < count / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << "Object type: " << animals[i]->getType() << std::endl << std::endl;
	}

	for (int i = 0; i < count; i++)
		delete animals[i];

	std::cout << std::endl;

	std::cout << "Dog_1 " << dog1.getIdea(10) << std::endl;
	dog1.setIdea(10, "wants a bone");
	std::cout << "Dog_1 " << dog1.getIdea(10) << std::endl;
	std::cout << "Dog_2 " << dog2.getIdea(10) << std::endl;
	dog1 = dog2;
	std::cout << "Dog_1 " << dog1.getIdea(10) << std::endl;
	std::cout << "Dog_2 " << dog2.getIdea(10) << std::endl;
	
	std::cout << std::endl;
	
	return (0);
}
