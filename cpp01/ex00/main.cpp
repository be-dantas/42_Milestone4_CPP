/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:13:03 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/16 16:13:03 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* docin;

	randomChump("Pompom");
	
	docin = newZombie("Docin");
	docin->announce();
	delete docin;
	return (0);
}
