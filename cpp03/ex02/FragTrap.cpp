/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 10:24:12 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/26 14:03:59 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::~FragTrap() {
	std::cout << "--FragTrap: Destrutor--" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "--FragTrap: Constutor padrão--" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "--FragTrap: Constutor recebendo name--" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copyClass) : ClapTrap(copyClass) {
	std::cout << "--FragTrap: Constutor de cópia--" << std::endl;
}

/***************************************************************/

FragTrap& FragTrap::operator=(const FragTrap &scav)
{
	if (this != &scav)
		ClapTrap::operator=(scav);
	return (*this);
}

/***************************************************************/

void FragTrap::attack(const std::string& target)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "FragTrap: " << _name << " sem hitPoints ou energyPoints" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "FragTrap: " << _name << " ataca " << target << " causando " << _attackDamage << " de dano. Sobrando " << _energyPoints << " de energyPoints." << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "--FragTrap: Bate aqui ✋--" << std::endl;
}
