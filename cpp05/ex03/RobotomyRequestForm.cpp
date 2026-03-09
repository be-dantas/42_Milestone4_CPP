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

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {
	target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string newTarget) : AForm("RobotomyRequestForm", 72, 45) {
	target = newTarget;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy) {
	this->target = copy.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->target = copy.target;
	}
	return (*this);
}

/**********************************************************************/

std::string RobotomyRequestForm::getTarget() const {
	return (target);
}

/**********************************************************************/

void RobotomyRequestForm::execForm() const {
	std::cout << "ZZZZZZZZZZZZZZZ... " << target << " was successfully robotized" << std::endl;
}
