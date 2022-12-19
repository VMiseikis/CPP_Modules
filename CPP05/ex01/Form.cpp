/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:41:03 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/19 00:07:53 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//						CONSTRUCTORS and DESTRUCTORS

Form::Form() : _name("default Form"), _sigreq(150), _exereq(150), _signed(false) {}

Form::Form(std::string const name, int const req, int const exe) : _name(name), _sigreq(req), _exereq(exe), _signed(false)
{
	try 
	{
		if (req < 1 || exe < 1)
			throw (GradeTooHighException());
		if (req	> 150 || exe > 150)
			throw (GradeTooLowException());
	}
	catch (std::exception &err)
	{
		std::cerr << _name << " " << err.what() << std::endl;
	}
}

Form::Form(const Form &src) : _name(src.getName()), _sigreq(src.getSigReq()), _exereq(src.getExeReq()) { *this = src; }

Form::~Form() {}

//							GET and SET

std::string Form::getName() const	{ return (_name); }

int Form::getSigReq() const			{ return (_sigreq); }

int Form::getExeReq() const			{ return (_exereq); }

bool Form::getSigStatus() const		{ return (_signed); }

void Form::setSigStatus(bool const value) { _signed = value; }

//							OVERLOAD

const Form &Form::operator=(const Form &src)
{
	if (this != &src)
		setSigStatus(src.getSigStatus());
	return (*this);
}

std::ostream &operator<<(std::ostream &outStream, const Form &src)
{
	outStream << "Form: " << src.getName() << ", sigReq: " << src.getSigReq() << ", exeReq: " << src.getExeReq();
	if (src.getSigStatus() == false)
		outStream << ", sigStatus: false";
	else
		outStream << ", sigStatus: true";
	return (outStream);
}

//							FUNCTIONS

bool Form::beSigned(const Bureaucrat &src)
{
	try 
	{
		if (src.getGrade() > getSigReq())
			throw (GradeTooLowException());
		else
			setSigStatus(true);
		return (true);
	}
	catch (std::exception &err)
	{
		std::cerr << src.getName() << " " << err.what() << std::endl;
		return (false);
	}
}
