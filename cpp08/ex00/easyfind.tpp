/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 11:38:17 by beatriz           #+#    #+#             */
/*   Updated: 2026/03/21 11:38:18 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T& container, int num)
{
	typename T::iterator result;
	
	result = std::find(container.begin(), container.end(), num);
	if (result == container.end())
		throw std::runtime_error("Value not found");
	return (result);
}

template <typename T>
typename T::const_iterator easyfind(const T& container, int num)
{
	typename T::const_iterator result;
	
	result = std::find(container.begin(), container.end(), num);
	if (result == container.end())
		throw std::runtime_error("Value not found");
	return (result);
}
