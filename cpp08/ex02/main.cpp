/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 18:07:07 by beatriz           #+#    #+#             */
/*   Updated: 2026/03/21 21:29:22 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "=== MutantStack ===" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5); //[5]
	mstack.push(17); //[5, 17]
	std::cout << "Print top: " << mstack.top() << std::endl; //print 17
	mstack.pop(); //[5]
	std::cout << "Print size: " << mstack.size() << std::endl; //print 1
	mstack.push(3); //[5, 3]
	mstack.push(5); //[5, 3, 5]
	mstack.push(737); //[5, 3, 5, 737]
	mstack.push(0); //[5, 3, 5, 737, 0]

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << "Print container: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack); //teste de cópia com herança

	std::cout << "\n=== std::list ===" << std::endl;
	std::list<int> lst;

	lst.push_back(5);
	lst.push_back(17);
	std::cout << "Print top: " << lst.back() << std::endl;
	lst.pop_back();
	std::cout << "Print size: " << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::list<int>::iterator lit = lst.begin();
	std::list<int>::iterator lite = lst.end();

	++lit;
	--lit;
	std::cout << "Print list: ";
	while (lit != lite)
	{
		std::cout << *lit << " ";
		++lit;
	}
	std::cout << std::endl;

	return (0);
}
