/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:29:41 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/18 23:53:22 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string	const	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		virtual ~Bureaucrat();
		
		std::string getName() const;
		int			getGrade() const;
		void		setGrade(int const grade);
		const Bureaucrat &operator=(const Bureaucrat &src);

		void incrementGrade();
		void decrementGrade();
		void signForm(Form &src);
		void executeForm(Form const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("grade is to high or incorect, or it cannot be increased any higher");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("grade is to low or incorect, or it cannot be decreset any lower");
				}
		};
};

std::ostream &operator<<(std::ostream &outStream, const Bureaucrat &src);
		
#endif
