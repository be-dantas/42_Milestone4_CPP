/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:36:59 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/17 14:28:46 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename X>
void print(const X& i) {
	std::cout << i << " ";
}

template <typename X>
void setZero(X& i) {
	i = 0;
}

template <typename T, typename F>
void iter(T* arr, const int len, F func)
{
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

#endif
