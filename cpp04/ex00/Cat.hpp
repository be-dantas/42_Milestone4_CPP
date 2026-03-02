/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:31:18 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 11:45:04 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:
		~Cat();
		Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);

		void makeSound() const;
};

#endif