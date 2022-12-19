/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:01:42 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/06/02 16:11:26 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : MutantStack<T>::stack() {}
		MutantStack(const MutantStack<T> &src) : MutantStack<T>::stack(src) {}
		~MutantStack() {}

		const MutantStack &operator=(const MutantStack &src) { std::stack<T>::operator = (src); return (*this); }

		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		iterator begin() { return (this->c.begin());}
		iterator end() { return (this->c.end()); }

		typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin() { return (this->c.rbegin()); }
		reverse_iterator rend() { return (this->c.rend()); }

		typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
		const_iterator begin() const { return (this->c.begin()); }
		const_iterator end() const { return (this->c.end()); }

		typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator rbegin() const { return (this->c.rbegin()); }
		const_reverse_iterator rend() const { return (this->c.rend()); }
};

#endif
