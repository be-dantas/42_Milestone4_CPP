/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:31:18 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 11:45:10 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		~Dog();
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);

		void makeSound() const;
};

#endif