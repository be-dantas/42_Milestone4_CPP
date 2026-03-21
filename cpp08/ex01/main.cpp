/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 14:27:39 by beatriz           #+#    #+#             */
/*   Updated: 2026/03/21 18:00:43 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "=== Teste pdf ===" << std::endl;
	Span sp = Span(5);
	try 
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }

	/******************************************************/

	std::cout << "\n=== Teste 10.000 números ===" << std::endl;

	Span sp2(10000);
	try
	{
		for (int i = 0; i < 10000; i++)
			sp2.addNumber(i);

		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }
	
	/******************************************************/

	std::cout << "\n=== Teste erro overflow ===" << std::endl;
	Span sp3 = Span(2);
	try 
	{
		sp3.addNumber(6);
		sp3.addNumber(3);
		sp3.addNumber(17);
		
		std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }

	/******************************************************/

	std::cout << "\n=== Teste erro poucos elementos ===" << std::endl;
	Span sp4(5);
	try
	{
		sp4.addNumber(1);
		std::cout << "Shortest span: " << sp4.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp4.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }

	/******************************************************/

	std::cout << "\n=== Teste addRange ===" << std::endl;

	Span sp5(10);
	sp5.addNumber(6);
	sp5.addNumber(3);
	
	std::vector<int> v;
	v.push_back(17);
	v.push_back(9);
	v.push_back(11);
	
	try
	{
		sp5.addRange(v.begin(), v.end());

		std::cout << "Shortest span: " << sp5.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp5.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }

	return (0);
}
