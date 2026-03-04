/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:04:36 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/04 18:41:26 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

//invariante da classe

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		~Bureaucrat();
		Bureaucrat();
		Bureaucrat(std::string newName, int newGrade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);

		//função de exceção menor e maior
		
		void decrementGrade();
		void incrementGrade();
};

#endif