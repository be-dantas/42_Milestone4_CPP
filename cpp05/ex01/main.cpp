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
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat boss("Alice", 10);
		Bureaucrat intern("Bob", 120);

		Form contract("Contract", 50, 20);

		std::cout << boss << std::endl;
		std::cout << intern << std::endl;
		std::cout << contract << std::endl;

		std::cout << "\n--- Tentativa de assinatura ---\n" << std::endl;

		intern.signForm(contract); // deve falhar
		boss.signForm(contract);   // deve funcionar

		std::cout << "\n--- Estado final do formulário ---\n" << std::endl;
		std::cout << contract << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Erro: " << e.what() << std::endl; }

	return (0);
}
