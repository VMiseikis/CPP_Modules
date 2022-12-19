/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:00:25 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/30 16:10:53 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void easyfind(T& vc, int x)
{
	typename T::iterator it = std::find(vc.begin(), vc.end(), x);
	if (it != vc.end())
		std::cout << "Item: " << *it << " was found at index: " << std::distance(vc.begin(), it) << std::endl;
	else
		std::cout << "Item: " << x << " was not found" << std::endl;
	
}
