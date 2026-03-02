/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 13:58:48 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 15:57:36 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << animal->getType() << ", ";
	animal->makeSound();

	std::cout << dog->getType() << ", ";
	dog->makeSound();
	
	std::cout << cat->getType() << ", ";
	cat->makeSound();
	
	delete animal;
	delete dog;
	delete cat;

	std::cout << "-----------------------------------------" << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	
	std::cout << wrongAnimal->getType() << ", ";
	wrongAnimal->makeSound();
	
	std::cout << wrongCat->getType() << ", ";
	wrongCat->makeSound();
	
	delete wrongAnimal;
	delete wrongCat;
	
	return (0);
}
