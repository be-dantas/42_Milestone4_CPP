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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const int size = 4;
	Animal* animals[size];
	
	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();
	
	// animals[0].brain.setBrain(0, "Quero passear");
	// animals[size].brain.setBrain(0, "Me sirva");

	//PRINT
	for (int i = 0; i < size; i++)
	{
		std::cout << animals[i]->getType() << ", ";
		animals[i]->makeSound();
	}
	
	for (int i = 0; i < size; i++)
		delete animals[i];
	
	return (0);
}
