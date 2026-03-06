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

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {
	target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string newTarget) : AForm("PresidentialPardonForm", 25, 5) {
	target = newTarget;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy) {
	this->target = copy.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->target = copy.target;
	}
	return (*this);
}

/**********************************************************************/

std::string PresidentialPardonForm::getTarget() const {
	return (target);
}

/**********************************************************************/

void PresidentialPardonForm::execForm() const {
	std::cout << target << " was pardoned by Zaphod Beeblebro" << std::endl;
}
