/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:01:27 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/27 16:08:00 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//						CONSTRUCTORS and DESTRUCTORS

template <class T>
Array<T>::Array() : _arr(new T[0]), _size(0) {}

template <class T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n) {}

template <class T>
Array<T>::Array(const Array<T> &src) : _arr(new T[src.size()]), _size(src.size())
{
	for (size_t i = 0; i < _size; i++)
		_arr[i] = src._arr[i];
}

template <class T>
Array<T>::~Array() { delete[] _arr; }

//							GET and SET

template <class T>
size_t Array<T>::size() const { return (_size); }

//							OVERLOAD

template <class T>
const Array<T> &Array<T>::operator=(const Array<T> &src)
{
	if (this != &src)
	{
		if (_arr)
			delete [] _arr;
		_size = src.size();
		_arr = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_arr[i] = src._arr[i];
	}
	return (*this);
}

template <class T>
T &Array<T>::operator[](const size_t index)
{
	if (index >= _size)
		throw (OutOfBoundException());
	return (_arr[index]);
}

template <class T>
T &Array<T>::operator[](const size_t index) const { return (_arr[index]); }
