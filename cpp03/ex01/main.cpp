/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:55:57 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/25 17:06:39 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a;
	ClapTrap b("Bia");
	ClapTrap c(b);
	a = b;

	b.attack("Wes");
	b.attack("Wes");

	b.takeDamage(1);
	b.takeDamage(2);

	b.beRepaired(1);
	b.beRepaired(10);

	std::cout << "-----------------------------------------------------------" << std::endl;

	// Testando limite de energia
	for (int i = 0; i < 12; i++)
		b.attack("Teste");

	return (0);
}
