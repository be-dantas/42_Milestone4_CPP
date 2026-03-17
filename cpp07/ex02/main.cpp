/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:36:15 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/17 19:17:54 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << "===== Teste: int =====" << std::endl;
	Array<int> a(5);
	try
	{
		a[0] = 1;
		a[1] = 2;
		a[2] = 3;
		a[3] = 4;
		a[4] = 5;
		
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }

	std::cout << "\n===== Teste: char =====" << std::endl;
	Array<char> b(3);
	try
	{
		b[0] = 'B';
		b[1] = 'i';
		b[2] = 'a';
		
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << b[i] << " ";
		std::cout << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }

	std::cout << "\n===== Teste: fora dos limites do array =====" << std::endl;
	Array<int> c(2);
	try
	{
		c[0] = 1;
		c[1] = 2;
		c[2] = 3;
		
		for (unsigned int i = 0; i < c.size(); i++)
			std::cout << c[i] << " ";
		std::cout << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }

	std::cout << "\n===== Teste: array vazio =====" << std::endl;
	Array<char> d;
	try
	{
		d[0] = 'B';
		std::cout << d[0] << " " << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }

	std::cout << "\n===== Teste: const =====" << std::endl;
	const Array<int> f(1);
	try {
		std::cout << f[0] << std::endl; }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }

	std::cout << "\n===== Teste: index negativo =====" << std::endl;
	Array<char> g(2);
	try
	{
		g[0] = 'A';
		g[-1] = 'B';
		
		for (unsigned int i = 0; i < g.size(); i++)
			std::cout << g[i] << " ";
		std::cout << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }

	std::cout << "\n===== Teste: deep copy =====" << std::endl;
	Array<int> orig(2);
	orig[0] = 1;
	orig[1] = 2;

	Array<int> copy = orig;
	copy[0] = 100;

	std::cout << "orig[0]: " << orig[0] << std::endl;
	std::cout << "copy[0]: " << copy[0] << std::endl;
}
