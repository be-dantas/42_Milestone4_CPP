/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:56:27 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/26 11:48:45 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	
	public:
		~ScavTrap();
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap &copyClass);
		
		ScavTrap &operator=(const ScavTrap &scav);

		void attack(const std::string& target);
		void guardGate();
};

#endif
