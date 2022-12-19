/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:32:12 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/30 16:10:06 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vc;

	std::cout << "Item list:" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		vc.push_back(i + 10);
		std::cout << i + 10 << " ";
	}
	std::cout << std::endl;
	easyfind(vc, 14);
	easyfind(vc, 10);
	easyfind(vc, 99);
	easyfind(vc, 19);

	return (0);
}
