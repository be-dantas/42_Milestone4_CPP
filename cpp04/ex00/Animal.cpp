/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:45:54 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 13:57:48 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal() {
	std::cout << "Animal: destrutor" << std::endl;
}

Animal::Animal() : type("NADA") {
	std::cout << "Animal: construtor padrão" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal: construtor de cópia" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& copy)
{
	std::cout << "Animal: operador de cópia" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

std::string Animal::getType() const {
	return (type);
}

void Animal::makeSound() const {
	std::cout << "NADA" << std::endl;
}
