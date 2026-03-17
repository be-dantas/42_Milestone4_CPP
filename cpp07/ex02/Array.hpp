/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:36:38 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/17 17:22:38 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T* _array;
		unsigned int _size;

	public:
		~Array();
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		Array& operator=(const Array& copy);
		
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;

		class OutBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return "Index out of bounds"; }
		};
		
		unsigned int size() const;
};

#include "Array.tpp"

#endif