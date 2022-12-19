/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:10:24 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/12/19 18:58:05 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	welcome_message()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Welcome to the 80s phonebook app.     |" << std::endl;
	std::cout << "|     Currently the phonebook is empty.     |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "| Available commands to use:                |" << std::endl;
	std::cout << "|    ADD    - to add new contact;           |" << std::endl;
	std::cout << "|    SEARCH - to dislay a specific contact; |" << std::endl;
	std::cout << "|    EXIT   - to quit program.              |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "| Warning: all contacts will be lost after  |" << std::endl;
	std::cout << "|          exiting the program              |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

bool handle_commands(PhoneBook &book, std::string input)
{
	for (unsigned int i = 0; i < input.length(); i++)
		std::tolower(input[i]);
	if (input == "add")
		return book.add_contact(book);
	else if (input == "search")
		return book.search_for_a_contact(book);
	else if (input == "exit")
		exit(1);
	else
		std::cout << ">> ERROR: command '" << input << "' not recognised." << std::endl;
	return true;
}

int main(void)
{
	PhoneBook book;
	std::string input;
	
	welcome_message();
	std::cout << ">> ";
	while (true)
	{
		std::getline(std::cin, input);
		if (!std::cin.good())
			return (0);
		if (input.length() != 0 && handle_commands(book, input))
			std::cout << ">> ";
	}
	return (0);
}
