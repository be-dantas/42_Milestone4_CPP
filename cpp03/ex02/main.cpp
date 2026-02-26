/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:55:57 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/26 14:13:32 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "---- ClapTrap Test ----" << std::endl;
	ClapTrap a("A");
	a.attack("target1");
	a.takeDamage(5);
	a.beRepaired(3);

	std::cout << "\n---- ScavTrap Test ----" << std::endl;
	ScavTrap b("B");
	b.attack("target2");
	b.takeDamage(30);
	b.beRepaired(10);
	b.guardGate();

	std::cout << "\n---- FragTrap Test ----" << std::endl;
	FragTrap c("C");
	c.attack("target3");
	c.takeDamage(40);
	c.beRepaired(20);
	c.highFivesGuys();

	std::cout << "\n---- Energy Drain Test ----" << std::endl;
	for (int i = 0; i < 105; i++)
		c.attack("dummy");

	std::cout << "\n---- Destruction ----" << std::endl;
	return (0);
}
