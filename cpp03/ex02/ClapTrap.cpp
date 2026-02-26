/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:59:44 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/26 11:47:33 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap() {
	std::cout << "--ClapTrap: Destrutor--" << std::endl;
}

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "--ClapTrap: Constutor padrão--" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "--ClapTrap: Constutor recebendo name--" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copyClass) {
	std::cout << "--ClapTrap: Constutor de cópia--" << std::endl;
	*this = copyClass;
}

/***************************************************************/

ClapTrap& ClapTrap::operator=(const ClapTrap &clap)
{
	if (this != &clap)
	{
		this->_name = clap._name;
		this->_hitPoints = clap._hitPoints;
		this->_energyPoints = clap._energyPoints;
		this->_attackDamage = clap._attackDamage;
	}
	return (*this);
}

/***************************************************************/

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap: " << _name << " sem hitPoints ou energyPoints" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap: " << _name << " ataca " << target << " causando " << _attackDamage << " de dano. Sobrando " << _energyPoints << " de energyPoints." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints = _hitPoints - amount;
	std::cout << "ClapTrap: " << _name << " tomou " << amount << " de dano. Sobrando " << _hitPoints << " de hitPoints" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap: " << _name << " sem hitPoints ou energyPoints" << std::endl;
		return ;
	}
	_hitPoints = _hitPoints + amount;
	if (_hitPoints > 10)
		_hitPoints = 10;
	_energyPoints--;
	std::cout << "ClapTrap: " << _name << " foi reparado(a) com " << amount << " ponto(s). Sobrando " << _energyPoints << " de energyPoints." << std::endl;
}
