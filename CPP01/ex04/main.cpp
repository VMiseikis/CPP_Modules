/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:19:43 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/12/19 19:25:41 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	ft_replace(std::string line, std::ofstream& writeFile, std::string str1, std::string str2)
{
	size_t	str1_len;
	size_t	pos = 0;
	
	str1_len = str1.length();
	pos = line.find(str1);
	while (pos != std::string::npos)
	{
		line.erase(pos, str1_len);
		line.insert(pos, str2);
		pos = line.find(str1, pos + str2.length());

	}
	writeFile << line << std::endl;
}

void	ft_read_write(std::string file_name, std::string str1, std::string str2)
{
	std::string line;
	std::ifstream readFile (file_name.c_str());
	std::ofstream writeFile(file_name.append(".replace").c_str());
	if (readFile.is_open() && writeFile.is_open())
	{
		while (getline(readFile, line))
		{
			ft_replace(line, writeFile, str1, str2);
		}
		readFile.close();
		writeFile.close();
	}
	else
		std::cout << "ERROR. Error ocured while opening read/write files!" << std::endl;
}

int main(int argc, char **argv)
{
	std::string	file_name;
	std::string str1;
	std::string str2;

	if (argc != 4)
		std::cout << "ERROR. Wrong argument count!" << std::endl;
	else
	{
		file_name = argv[1];
		str1 = argv[2];
		str2 = argv[3];

		if (file_name == "" || str1 == "")
			std::cout << "ERROR. Empty arguments!" << std::endl;
		else if (str1 == str2)
			std::cout << "ERROR. Nothing to replace!" << std::endl;
		else
			ft_read_write(file_name, str1, str2);
	}
	return (0);
}
