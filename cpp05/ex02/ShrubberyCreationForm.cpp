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

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {
	target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string newTarget) : AForm("ShrubberyCreationForm", 145, 137) {
	target = newTarget;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy) {
	this->target = copy.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->target = copy.target;
	}
	return (*this);
}

/**********************************************************************/

std::string ShrubberyCreationForm::getTarget() const {
	return (target);
}

/**********************************************************************/

void ShrubberyCreationForm::execForm() const
{
	std::ofstream file((target + "_shrubbery").c_str());

	if (!file)
		return;

	file << "      /\\\n";
	file << "     /**\\\n";
	file << "    /****\\\n";
	file << "   /******\\\n";
	file << "  /********\\\n";
	file << "      ||\n";
	file << "      ||\n";

	file.close();
}
