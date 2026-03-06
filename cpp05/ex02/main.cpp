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
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << "=== Test 1: ShrubberyCreationForm ===" << std::endl;
	try
	{
		Bureaucrat Bia("Bia", 130);
		ShrubberyCreationForm s("home");
		std::cout << s << std::endl;
		Bia.signAForm(s);
		Bia.execAForm(s);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl; }

	std::cout << "\n=== Test 2: RobotomyRequestForm ===" << std::endl;
	try
	{
		Bureaucrat Bia("Bia", 40);
		RobotomyRequestForm r("Gah");
		std::cout << r << std::endl;
		Bia.signAForm(r);
		Bia.execAForm(r);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl; }

	std::cout << "\n=== Test 3: PresidentialPardonForm ===" << std::endl;
	try
	{
		Bureaucrat Bia("Bia", 1);
		PresidentialPardonForm p("Gah");
		std::cout << p << std::endl;
		Bia.signAForm(p);
		Bia.execAForm(p);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n=== Test 4: Execute unsigned form ===" << std::endl;
	try
	{
		Bureaucrat Bia("Bia", 130);
		ShrubberyCreationForm s("home");
		std::cout << s << std::endl;
		//Bia.signAForm(s);
		Bia.execAForm(s);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl; }

	std::cout << "\n=== Test 5: No grade to sign ===" << std::endl;
	try
	{
		Bureaucrat Bia("Bia", 150);
		ShrubberyCreationForm s("home");
		std::cout << s << std::endl;
		Bia.signAForm(s);
		Bia.execAForm(s);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl; }

	std::cout << "\n=== Test 6: No grade to execute ===" << std::endl;
	try
	{
		Bureaucrat Bia("Bia", 140);
		ShrubberyCreationForm s("home");
		std::cout << s << std::endl;
		Bia.signAForm(s);
		Bia.execAForm(s);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl; }

	return (0);
}
