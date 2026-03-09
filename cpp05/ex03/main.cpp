/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:20:46 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/09 09:42:10 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat Bia("Bia", 130);
		Intern intern;
		AForm* form;
		
		// Shrubbery Creation | Robotomy Request | Presidential Pardon
		form = intern.makeForm("Shrubbery Creation", "home");
		if (form)
		{
			std::cout << *form << std::endl;
			Bia.signAForm(*form);
			Bia.execAForm(*form);
			delete form;
		}
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl; }
		
	return (0);
}
