/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:13:43 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/16 16:13:44 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;
	Zombie* horde;

	horde = zombieHorde(N, "Bias");

	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;
	return (0);
}