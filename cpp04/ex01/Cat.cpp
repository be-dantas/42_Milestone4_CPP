/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:56:41 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 18:18:33 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::~Cat()
{
	delete brain;
	std::cout << "--Cat: destrutor--" << std::endl;
}

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "--Cat: construtor padrão--" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "--Cat: construtor de cópia--" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "--Cat: operador de cópia--" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		delete this->brain;
		this->brain = new Brain(*copy.brain); 
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "MIAU" << std::endl;
}
