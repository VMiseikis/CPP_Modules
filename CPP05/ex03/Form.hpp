/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:41:13 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/19 00:10:21 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		int const			_sigreq;
		int const			_exereq;
		bool				_signed;

	public:
		Form();
		Form(std::string name, int const _req, int const _exe);
		Form(const Form &src);
		virtual ~Form();

		std::string getName() const;
		int getSigReq() const;
		int getExeReq() const;
		bool getSigStatus() const;
		void setSigStatus(bool const value);

		const Form &operator=(const Form &src);

		bool beSigned(Bureaucrat const &src);
		bool beExecuted(Bureaucrat const &src) const;
		virtual void execute(Bureaucrat const &executor) const = 0;
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("grade to sign or execute is to high or incorect");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("grade to sign or execute is to low or incorect");
				}
		};

		class IsAlreadySigned : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("it is already signed");
				}	
		};

		class FormNotSigned : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("cannot execute the form, cause it is not signed");
				}
		};
};

std::ostream &operator<<(std::ostream &outStream, const Form &src);

#endif
