/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:23:45 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 19:19:25 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::~Brain() {
	std::cout << "--Brain: destrutor--" << std::endl;
}

Brain::Brain() {
	std::cout << "--Brain: construtor--" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "--Brain: construtor de cópia--" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

Brain& Brain::operator=(const Brain& copy)
{
	std::cout << "--Brain: operador de cópia--" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return (*this);
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index > 99)
		return ("");
	return (ideas[index]);
}

void Brain::setIdeas(int index, std::string newIdea) {
	this->ideas[index] = newIdea;
}
