/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:20:46 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/04 18:41:06 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat() : name("Default"), grade(1) {}

Bureaucrat::Bureaucrat(std::string newName, int newGrade) : name(newName)
{
	if (newGrade < 1)
		;//função de exceção menor
	else if (newGrade > 150)
		;//função de exceção maior
	else
		grade = newGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name), grade(copy.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this != &copy)
		this->grade = copy.grade;
	return (*this);	
}

/**********************************************************************/


//função de exceção menor e maior


/**********************************************************************/

void Bureaucrat::decrementGrade()
{
	if (grade == 1)
		;//função de exceção menor
	grade--;	
}

void Bureaucrat::incrementGrade()
{
	if (grade == 150)
		;//função de exceção maior
	grade++;	
}
