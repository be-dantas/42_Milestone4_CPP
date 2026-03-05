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
		throw GradeTooLowException();
	else if (newGrade > 150)
		throw GradeTooHighException();
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

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

/**********************************************************************/

const std::string Bureaucrat::getName() const {
	return (name);
}

int Bureaucrat::getGrade() const {
	return (grade);
}

/**********************************************************************/

void Bureaucrat::incrementGrade()
{
	if (grade == 1)
		throw GradeTooLowException();
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if (grade == 150)
		throw GradeTooHighException();
	grade++;
}

/**********************************************************************/

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", grade: " << b.getGrade();
	return (os); 
}
