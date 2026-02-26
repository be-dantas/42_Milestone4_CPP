/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 10:24:12 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/26 11:35:07 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::~ScavTrap() {
	std::cout << "--ScavTrap: Destrutor--" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "--ScavTrap: Constutor padrão--" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "--ScavTrap: Constutor recebendo name--" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copyClass) : ClapTrap(copyClass) {
	std::cout << "--ScavTrap: Constutor de cópia--" << std::endl;
}

/***************************************************************/

ScavTrap& ScavTrap::operator=(const ScavTrap &scav)
{
	if (this != &scav)
		ClapTrap::operator=(scav);
	return (*this);
}

/***************************************************************/

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ScavTrap: " << _name << " sem hitPoints ou energyPoints" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ScavTrap: " << _name << " ataca " << target << " causando " << _attackDamage << " de dano. Sobrando " << _energyPoints << " de energyPoints." << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "--ScavTrap: Modo ponteiro--" << std::endl;
}
