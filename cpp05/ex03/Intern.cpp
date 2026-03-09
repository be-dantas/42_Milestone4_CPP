/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 08:53:27 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/09 09:29:11 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::~Intern() {}

Intern::Intern() {}

Intern::Intern(const Intern& copy){
	(void)copy;
}

Intern& Intern::operator=(const Intern& copy)
{
	(void)copy;
	return (*this);
}

AForm* Intern::presidential(const std::string &target) {
	return (new PresidentialPardonForm(target));
}

AForm* Intern::robotomy(const std::string &target) {
	return (new RobotomyRequestForm(target));
}

AForm* Intern::shrubbery(const std::string &target) {
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm(const std::string typeForm, const std::string name)
{

	std::string forms[3] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};
	AForm* (Intern::*actions[3])(const std::string &) = {&Intern::presidential, &Intern::robotomy, &Intern::shrubbery};

	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == typeForm)
		{
			std::cout << "Intern creates " << forms[i] << std::endl;
			return (this->*actions[i])(name);
		}
	}
	std::cout << "Error: form not found" << std::endl;
	return (NULL);
}
