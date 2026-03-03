/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:56:41 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 19:17:49 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::~Dog()
{
	std::cout << "--Dog: destrutor--" << std::endl;
	delete brain;
}

Dog::Dog() : Animal()
{
	std::cout << "--Dog: construtor padrão--" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "--Dog: construtor de cópia--" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "--Dog: operador de cópia--" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		delete this->brain;
		this->brain = new Brain(*copy.brain); 
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "AU AU";
}

Brain& Dog::getBrain() {
	return (*brain);
}
