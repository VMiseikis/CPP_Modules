/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:26:45 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/19 00:11:44 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//						CONSTRUCTORS and DESTRUCTORS

Bureaucrat::Bureaucrat() : _name("default Bureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw (GradeTooHighException());
		if (grade > 150)
			throw (GradeTooLowException());
		_grade = grade;
	}
	catch (std:: exception &err) 
	{
		std::cerr << _name << " " << err.what() << std::endl;
		_grade = 150;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()) { *this = src; }

Bureaucrat::~Bureaucrat() {}

//							GET and SET

std::string Bureaucrat::getName() const		{ return (_name); }

int Bureaucrat::getGrade() const			{ return (_grade); }

void Bureaucrat::setGrade(int const grade)	{ _grade = grade; }

//							OVERLOAD

const Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
		setGrade(src.getGrade());
	return (*this);
}

std::ostream &operator<<(std::ostream &outStream, const Bureaucrat &src)
{
	outStream << src.getName() <<  ", bureaucrat grade " << src.getGrade(); 
	return (outStream);
}

//							FUNCTIONS

void Bureaucrat::incrementGrade()
{
	try
	{
		if (getGrade() - 1 < 1)
			throw (GradeTooHighException());
		setGrade(getGrade() - 1);
	}
	catch (std::exception &err)
	{
		std::cerr << getName() << " " << err.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade()
{
	try
	{
		if (getGrade() + 1 > 150)
			throw (GradeTooLowException());
		setGrade(getGrade() + 1);
	}
	catch (std::exception &err)
	{
		std::cerr << getName() << " " << err.what() << std::endl;
	}
}

void Bureaucrat::signForm(Form &src)
{
	try
	{
		if (src.getSigStatus() == false)
		{
			if (src.beSigned(*this) == true)
			{
				src.beSigned(*this);
				std::cout << getName() << " signed " << src.getName() << std::endl;
			}
		}
		else
			throw (Form::IsAlreadySigned());
	}
	catch (std::exception &err)
	{
		std::cerr << getName() << " couldn’t sign " << src.getName() << " because " << err.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &err)
	{
		std::cerr << err.what();	
	}
}
