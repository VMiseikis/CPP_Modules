/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:40:35 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/15 23:21:36 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

struct Node {
    AMateria	*data;
    Node		*next;
};

Node *head = NULL; 

void lst_add_front(AMateria *materia)
{
	Node *newNode = new Node();
	newNode->data = materia;
	newNode->next = head;
	head = newNode;
}

void lst_free()
{
	Node	*temp;
	
	while (head)
	{
		temp = head;
		head = head->next;
		delete temp->data;
		delete temp;
	}
}

void test_cases()
{
	Character	*npc1 = new Character("wizard_1");
	Character	*npc2 = new Character("wizard_2");
	IMateriaSource	*book = new MateriaSource();

	std::cout << std::endl;

	book->learnMateria(new Ice());
	book->learnMateria(new Cure());
	book->learnMateria(new Cure());
	book->learnMateria(new Cure());
	book->learnMateria(new Cure());
	book->createMateria("fireball");

	std::cout << std::endl;

	npc1->equip(book->createMateria("ice"));
	npc1->equip(book->createMateria("armagedon"));
	npc1->equip(book->createMateria("ice"));
	npc1->equip(book->createMateria("ice"));	
	npc1->equip(book->createMateria("cure"));
	
	std::cout << std::endl;

	npc1->unequip(3);
	npc1->equip(book->createMateria("cure"));
	npc1->use(0, *npc2);
	npc1->use(3, *npc2);
	npc2->use(1, *npc1);

	std::cout << std::endl;

	lst_free();
	delete npc1;
	delete npc2;
	delete book;
}

int main()
{
	test_cases();
	return (0);
}
