/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 22:11:00 by beatriz           #+#    #+#             */
/*   Updated: 2026/04/02 16:09:39 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	/*if (argc < 2)
	{
		std::cout << "Erro" << std::endl;
		return 1;
	}*/
	
	try
	{
		PmergeMe pmm;
		pmm.validInput(argc, argv);
		std::cout << "Before: " << printVector() << std::endl;
		pmm.orderMerge();
		std::cout << "After: " << printVector() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}

	return 0;
}
