/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:13:21 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/04/24 21:09:18 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const 	Animal		*animal = new Animal();
	const	Animal		*dog = new Dog();
	const	Animal		*cat = new Cat();
	const	WrongAnimal	*wrong_animal = new WrongAnimal();
	const	WrongAnimal	*wrong_cat = new WrongCat();
	
	std::cout << std::endl;
	std::cout << animal->getType() << " makes " << animal->makeSound() << std::endl;
	std::cout << dog->getType() << " makes " << dog->makeSound() << " sound" << std::endl;
	std::cout << cat->getType() << " makes " << cat->makeSound() << " sound" << std::endl;
	std::cout << wrong_animal->getType() << " makes " << wrong_animal->makeSound() << std::endl;
	std::cout << wrong_cat->getType() << " makes " << wrong_cat->makeSound() << " sound"<< std::endl;
	std::cout << std::endl;
	
	delete animal;
	delete dog;
	delete cat;
	delete wrong_animal;
	delete wrong_cat;
	
	return (0);
}
