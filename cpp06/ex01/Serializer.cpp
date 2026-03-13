/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 09:42:43 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/12 11:17:11 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::~Serializer() {}

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& copy) {
	*this = copy;
}

Serializer& Serializer::operator=(const Serializer& copy)
{
	(void)copy;
	return (*this);
}

/*****************************************************************************/

uintptr_t Serializer::serialize(Data* ptr)
{

}

Data* Serializer::deserialize(uintptr_t raw)
{

}
