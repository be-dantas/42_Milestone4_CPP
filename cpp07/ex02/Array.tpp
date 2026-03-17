/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:39:41 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/17 19:16:35 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::~Array() {
	delete[] _array;
}

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(const Array& copy)  : _array(NULL), _size(0) {
	*this = copy;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& copy)
{
	if (this != &copy)
	{
		delete[] _array;
		_size = copy._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = copy._array[i];
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw OutBoundsException();
	return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw OutBoundsException();
	return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return (_size);
}
