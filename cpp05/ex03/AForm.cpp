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

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::~AForm() {}

AForm::AForm() : name("Default"), isSigned(false), signGrade(1), execGrade(1) {}

AForm::AForm(const std::string newName, const int newSign, const int newExec) : name(newName), isSigned(false), signGrade(newSign), execGrade(newExec)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& copy) : name(copy.name), isSigned(copy.isSigned), signGrade(copy.signGrade), execGrade(copy.execGrade) {}

AForm& AForm::operator=(const AForm& copy)
{
	if (this != &copy)
		this->isSigned = copy.isSigned;
	return (*this);
}

/**********************************************************************/

const char* AForm::GradeTooHighException::what() const throw() {
	return ("grade too high");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("grade too low");
}

const char* AForm::FormNotSignedException::what() const throw() {
	return ("form isn't signed");
}

/**********************************************************************/

const std::string AForm::getName() const {
	return (name);
}

bool AForm::getIsSigned() const {
	return (isSigned);
}

int AForm::getSignGrade() const {
	return (signGrade);
}

int AForm::getExecGrade() const {
	return (execGrade);
}

/**********************************************************************/

void AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > signGrade)
		throw GradeTooLowException();
	isSigned = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	else if (executor.getGrade() > execGrade)
		throw GradeTooLowException();
	execForm();
}

/**********************************************************************/

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	os << "Form " << f.getName() << " | Status: " << (f.getIsSigned() ? "signed" : "unsigned") << " | Grade to sign: " << f.getSignGrade() << " | Grade to execute: " << f.getExecGrade();
	return (os);
}
