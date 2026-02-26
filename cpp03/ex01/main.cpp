/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:55:57 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/26 11:48:31 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "---- ClapTrap Test ----" << std::endl;
	ClapTrap a("A");
	a.attack("target1");
	a.takeDamage(5);
	a.beRepaired(3);

	std::cout << "\n---- ScavTrap Test ----" << std::endl;
	ScavTrap b("B");
	b.attack("target2");      // deve usar override do ScavTrap
	b.takeDamage(30);
	b.beRepaired(10);
	b.guardGate();

	std::cout << "\n---- Energy Drain Test ----" << std::endl;
	for (int i = 0; i < 55; i++)
		b.attack("dummy");

	std::cout << "\n---- Destruction ----" << std::endl;
	return 0;
}
