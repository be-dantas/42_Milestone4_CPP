/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:31:18 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 11:44:54 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		~Animal();
		Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);

		void makeSound() const;
		std::string getType() const;
};

#endif