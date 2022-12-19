/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:44:32 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/18 23:56:37 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//						CONSTRUCTORS and DESTRUCTORS

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery_Creation_Form", 145, 137), _target("unknown") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("Shrubbery_Creation_Form", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src), _target(src.getTarget()) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

//							GET and SET

std::string ShrubberyCreationForm::getTarget() const { return (_target); }

//							OVERLOAD

const ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	(void) src;
	return (*this);
}

//							FUNCTIONS

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream file;

	if (Form::beExecuted(executor) == true)
	{
		try 
		{
			file.open(getTarget() + "_shrubbery");
			if (!file)
				throw (FileOpenError());
		}
		catch (std::exception &err)
		{
			std::cerr << err.what() << getTarget() << "_shrubbery" <<  std::endl;
		}
		
		file << "              ((((((((((((             \n";                    
		file << "      *(((((((************((           \n";                    
		file << "     (/*********************#(((       \n";                    
		file << "    (***************************((((   \n";                    
		file << " /((********************************(( \n";                    
		file << "(*************************************(\n";                    
		file << "************************************** \n";                     
		file << " ***********************************.  \n";                    
		file << "   ********************************    \n";                    
		file << "    ******************************     \n";                    
		file << "      ***********/(   (*.   ,,         \n";                    
		file << "                 (((((                 \n";                    
		file << "                 (((((                 \n";                    
		file << "                 /(((/                 \n";                    
		file << "                 ((((/                 \n";                    
		file << "                 (((((                 \n";                    
		file << "                /(((((                 \n";                    
		file << "                (((((((                \n";                    
		file << "              (((((((((((,             \n";
		
		file.close();

		std::cout << executor.getName() << " executed " << getName() << std::endl;
	}
}
