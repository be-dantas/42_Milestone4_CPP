/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 11:38:13 by beatriz           #+#    #+#             */
/*   Updated: 2026/03/21 11:38:14 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << "=== Teste vetor ===" << std::endl;
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	try
	{
		std::vector<int>::iterator result = easyfind(v, 2);
		std::cout << "Found: " << *result << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }

	/******************************************************/

	std::cout << "=== Teste lista ===" << std::endl;
	std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	try
	{
		std::list<int>::iterator result = easyfind(l, 2);
		std::cout << "Found: " << *result << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }

	/******************************************************/

	std::cout << "=== Teste const ===" << std::endl;
	std::vector<int> temp;
	temp.push_back(1);
	temp.push_back(2);
	temp.push_back(3);
	const std::vector<int> constv = temp;
	try
	{
		std::vector<int>::const_iterator result = easyfind(constv, 2);
		std::cout << "Found: " << *result << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }

	/******************************************************/

	std::cout << "=== Teste erro ===" << std::endl;
	std::list<int> er;
	er.push_back(1);
	er.push_back(2);
	er.push_back(3);
	try
	{
		std::list<int>::iterator result = easyfind(er, 4);
		std::cout << "Found: " << *result << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }

	return (0);
}
