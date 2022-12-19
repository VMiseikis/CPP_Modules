/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:10:24 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/12/19 19:09:41 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
	oldest = 0;
	field[0] = "First Name";
	field[1] = "Last Name";
	field[2] = "NickName";
	field[3] = "Phone Number";
	field[4] = "Darkest Secret";
}

PhoneBook::~PhoneBook(){}

void	PhoneBook::error_msg(std::string str, int index)
{
	std::cout << ">> ERROR: ";
	if (index == 0 || index == 1)
		std::cout << "contacts " << str << " should contain only letters. Try again.";
	else if (index == 3)
		std::cout << "contacts " << str << " should contain only numbers. Try again.";
	else if (index > 3)
		std::cout << "contacts " << str << " should contain only printable characters. Try again.";
	else if (index == -1)
		std::cout << "contacts " << str << " field cannot be empty. Try again.";
	else if (index == -3)
		std::cout << " wrong index. Functionality terminated.";
	std::cout << std::endl;
}

void	PhoneBook::print_ten_chars(std::string str)
{
	int	len;

	len = str.length();
	if (len == 10)
		std::cout << str;
	else if (len > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

int	PhoneBook::check_input(std::string input, int index)
{
	unsigned long	i;

	i = 0;
	if (index < 2)
	{
		for (i = 0; i < input.length(); i++)
			if (!isalpha(input[i]))
				return (0);
	}
	else if (index == 3)
	{
		for (i = 0; i < input.length(); i++)
			if (!isdigit(input[i]))
				return (0);
	}
	else
	{
		for (i = 0; i < input.length(); i++)
			if (!isprint(input[i]))
				return (0);
	}
	return (1);
}
bool	PhoneBook::add_contact(PhoneBook &book)
{
	int			i;
	std::string	input;

	i = 0;
	std::cout << ">> -----Adding contact!-----" << std::endl;
	while (i < 5)
	{
		std::cout << ">> Enter " << book.field[i] << ":" << std::endl;
		std::cout << ">> ";
		getline(std::cin, input);
		if (!std::cin.good())
			return false;
		else if (input.length() == 0)
			error_msg(book.field[i], -1);
		else if (!check_input(input, i))
			error_msg(book.field[i], i);
		else
		{
			book.contacts[book.oldest].setDetails(input, i);
			i++;
		}
	}
	book.oldest++;
	if (book.count < 8)
		book.count++;
	if (book.oldest >= 8)
		book.oldest = book.oldest - 8;
	std::cout << ">> -----Contact added!------" << std::endl;
	return true;
}

bool	PhoneBook::show_detailed_info(PhoneBook &book)
{
	int			i;
	std::string	input;

	std::cout << ">> Type index number, to view contact details:" << std::endl << ">>>> ";
	getline(std::cin, input);
	if (!std::cin.good())
		return false;
	if (input.length() <= 0 || input.length() > 1 || !isdigit(input[0]) || input[0] < '0' || input[0] > (book.count - 1 + '0'))
		error_msg("", -3);
	else
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|        Detailed contact information:       " << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		for (i = 0; i < 5; i++)
			std::cout << "| " << book.field[i] << ": " << book.contacts[(int)input[0] - 48].getDetail(i) << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	return true;
}

bool	PhoneBook::search_for_a_contact(PhoneBook &book)
{
	int i;
	int j;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name| Nick Name|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	if (book.count > 0)
	{
		j = 0;
		while (j < book.count)
		{
			i = 0;
			std::cout << "|         " << j;
			while (i < 3)
			{
				std::cout << "|";
				print_ten_chars(book.contacts[j].getDetail(i));
				i++;
			}
			std::cout << "|" << std::endl;
			j++;
		}
		std::cout << "---------------------------------------------" << std::endl;
		return show_detailed_info(book);
	}
	else
	{
		std::cout << "|   Phonebook is empty. No saved contacts.  |" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	return true;
}
