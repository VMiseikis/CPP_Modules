/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:10:24 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/12/19 19:06:30 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact		contacts[8];
		std::string field[5];
		int 		count;
		int			oldest;
		void	error_msg(std::string str, int index);
		void	print_ten_chars(std::string str);
		int		check_input(std::string input, int index);

	public:
		PhoneBook();
		~PhoneBook();
		bool	add_contact(PhoneBook &book);
		bool	show_detailed_info(PhoneBook &book);
		bool	search_for_a_contact(PhoneBook &book);
};
#endif
