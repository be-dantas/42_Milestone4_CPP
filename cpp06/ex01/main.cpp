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

int main()
{
	Data dt;
	dt.value = 42;
	std::cout << "Ponteiro original dt: " << &dt << " | dt.value: " << dt.value << std::endl;

	uintptr_t s = Serializer::serialize(&dt);
	Data* d = Serializer::deserialize(s);

	std::cout << "Serialize: " << s << std::endl;
	if (d == &dt) {
		std::cout << "Deserialize: " << d << " | d.value: " << d->value << std::endl;
	}
	else
		std::cout << "FAIL Deserialize" << std::endl;

	return (0);
}
