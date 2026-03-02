/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 13:58:48 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 15:19:06 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << meta->getType() << " ";
	meta->makeSound();

	std::cout << i->getType() << " ";
	i->makeSound();
	
	std::cout << j->getType() << " ";
	j->makeSound();
	
	delete meta;
	delete i;
	delete j;
	
	return (0);
}
