/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 08:53:27 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/09 09:13:14 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		AForm* presidential(const std::string &target);
		AForm* robotomy(const std::string &target);
		AForm* shrubbery(const std::string &target);

	public:
		~Intern();
		Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& copy);
		AForm* makeForm(const std::string typeForm, const std::string name);
};

#endif