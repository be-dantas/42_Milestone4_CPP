/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:31:26 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 15:33:28 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::~WrongCat() {
	std::cout << "--WrongCat: destrutor--" << std::endl;
}

WrongCat::WrongCat() : WrongAnimal()
{
	type = "Cat";
	std::cout << "--WrongCat: construtor padrão--" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "--WrongCat: construtor de cópia--" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "--WrongCat: operador de cópia--" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "MIAU" << std::endl;
}
