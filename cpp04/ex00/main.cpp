/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 13:58:48 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 15:40:05 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Animal.hpp"
// #include "Dog.hpp"
// #include "Cat.hpp"

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* dog = new Dog();
// 	const Animal* cat = new Cat();
	
// 	std::cout << meta->getType() << " ";
// 	meta->makeSound();

// 	std::cout << dog->getType() << " ";
// 	dog->makeSound();
	
// 	std::cout << cat->getType() << " ";
// 	cat->makeSound();
	
// 	delete meta;
// 	delete dog;
// 	delete cat;
	
// 	return (0);
// }


#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const WrongAnimal* animal = new WrongAnimal();
	const WrongAnimal* cat = new WrongCat();
	
	std::cout << animal->getType() << " ";
	animal->makeSound();
	
	std::cout << cat->getType() << " ";
	cat->makeSound();
	
	delete animal;
	delete cat;
	
	return (0);
}
