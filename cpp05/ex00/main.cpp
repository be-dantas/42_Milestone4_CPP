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

int main()
{
	std::cout << "----- Teste 1: criação válida -----" << std::endl;
	try
	{
		Bureaucrat a("Alice", 42);
		std::cout << a << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }

	std::cout << "\n----- Teste 2: grade muito alta -----" << std::endl;
	try
	{
		Bureaucrat b("Bob", 0);
		std::cout << b << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }

	std::cout << "\n----- Teste 3: grade muito baixa -----" << std::endl;
	try
	{
		Bureaucrat c("Charlie", 151);
		std::cout << c << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }

	std::cout << "\n----- Teste 4: incrementGrade -----" << std::endl;
	try
	{
		Bureaucrat d("David", 2);
		std::cout << d << std::endl;

		d.incrementGrade();
		std::cout << d << std::endl;

		d.incrementGrade(); // deve lançar exceção
		std::cout << d << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }

	std::cout << "\n----- Teste 5: decrementGrade -----" << std::endl;
	try
	{
		Bureaucrat e("Eva", 149);
		std::cout << e << std::endl;

		e.decrementGrade();
		std::cout << e << std::endl;

		e.decrementGrade(); // deve lançar exceção
		std::cout << e << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }

	return (0);
}
