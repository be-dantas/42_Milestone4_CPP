/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:23:07 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 15:30:22 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal() {
	std::cout << "--WrongAnimal: destrutor--" << std::endl;
}

WrongAnimal::WrongAnimal() : type("Nada") {
	std::cout << "--WrongAnimal: construtor padrão--" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "--WrongAnimal: construtor de cópia--" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "--WrongAnimal: operador de cópia--" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

std::string WrongAnimal::getType() const {
	return (type);
}

void WrongAnimal::makeSound() const {
	std::cout << "sem som" << std::endl;
}
