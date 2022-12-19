/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:27:28 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/27 16:10:46 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T> 
void ft_print_arr(T& arr, size_t len)
{
	for (size_t i = 0; i < len; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;		
}

int main()
{
	Array<std::string> arr_1(5);

	arr_1[0] = "zero";
	arr_1[1] = "one";
	arr_1[2] = "two";
	arr_1[3] = "three";
	arr_1[4] = "four";

	std::cout << std::endl << "Declared values" << std::endl;
	
	std::cout << "Arr_1: ";
	ft_print_arr(arr_1, arr_1.size());	
	Array<std::string> arr_2 = arr_1;
	std::cout << "Arr_2: ";
	ft_print_arr(arr_2, arr_2.size());	

	std::cout << std::endl << "Values after change" << std::endl;
	arr_1[0] = "****";
	std::cout << "Arr_1: ";
	ft_print_arr(arr_1, arr_1.size());	
	std::cout << "Arr_2: ";
	ft_print_arr(arr_2, arr_2.size());	

	std::cout << std::endl;
	Array<int> arr_3;
	std::cout << "Size of Arr_1: " << arr_1.size() << std::endl;
	std::cout << "Size of Arr_2: " << arr_2.size() << std::endl;
	std::cout << "Size of Arr_3: " << arr_3.size() << std::endl;

	std::cout << std::endl;
	try
	{
		std::cout << arr_1[50] << std::endl;
	}
	catch(const std::exception& err)
	{
		std::cerr << err.what() << std::endl;
	}
	
	std::cout << std::endl;

	return (0);
}