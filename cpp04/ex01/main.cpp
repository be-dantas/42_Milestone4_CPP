/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 13:58:48 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 19:02:20 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const int size = 4;
	Animal* animals[size];
	
	//ARRAY ANIMALS
	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	//BRAIN
	for (int i = 0; i < size; i++)
	{
		if (Dog* dog = dynamic_cast<Dog*>(animals[i]))
		{
			dog->getBrain().setIdeas(0, "Quero passear");
			dog->getBrain().setIdeas(1, "Quero brincar");
		}

		if (Cat* cat = dynamic_cast<Cat*>(animals[i]))
		{
			cat->getBrain().setIdeas(0, "Quero carinho");
			cat->getBrain().setIdeas(1, "Me sirva");
		}
	}

	//PRINT
	for (int i = 0; i < size; i++)
	{
		std::cout << animals[i]->getType() << ", ";
		animals[i]->makeSound();
		std::cout << ", ";

		if (Dog* dog = dynamic_cast<Dog*>(animals[i]))
			std::cout << "Ideia: " << dog->getBrain().getIdea(0) << std::endl;

		else if (Cat* cat = dynamic_cast<Cat*>(animals[i]))
			std::cout << "Ideia: " << cat->getBrain().getIdea(0) << std::endl;
	}

	//DESTRUCTOR
	for (int i = 0; i < size; i++)
		delete animals[i];
	
	return (0);
}
