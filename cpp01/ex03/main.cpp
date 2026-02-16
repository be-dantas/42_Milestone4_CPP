/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:14:57 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/16 17:25:28 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon weapon = Weapon("KNIFE");
		HumanA bob("Bob", weapon);
		bob.attack();
		weapon.setType("HAMMER");
		bob.attack();
	}
	
	{
		Weapon weapon = Weapon("KNIFE");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(weapon);
		jim.attack();
		weapon.setType("HAMMER");
		jim.attack();
	}
	
	return (0);
}