/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapMaxMin.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:19:04 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/17 10:25:28 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAPMAXMIN_HPP
#define SWAPMAXMIN_HPP

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T& max(const T& a, const T& b)
{
	if (a > b)
		return (a);
	return (b);
}

template <typename T>
const T& min(const T& a, const T& b)
{
	if (a < b)
		return (a);
	return (b);
}

#endif
