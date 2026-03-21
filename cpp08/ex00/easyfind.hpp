/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 11:38:20 by beatriz           #+#    #+#             */
/*   Updated: 2026/03/21 11:38:21 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <list>

//iterator é um typedef interno da classe.
//iterator é um tipo definido dentro dos containers da STL.
//A STL trabalha com iteradores, não índices.
template <typename T>
typename T::iterator easyfind(T& container, int i);

template <typename T>
typename T::const_iterator easyfind(const T& container, int i);

#include "easyfind.tpp"

#endif