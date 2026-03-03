/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:17:26 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/02 19:18:36 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		~Brain();
		Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& copy);

		std::string getIdea(int index) const;
		void setIdeas(int index, std::string newIdea);
};

#endif