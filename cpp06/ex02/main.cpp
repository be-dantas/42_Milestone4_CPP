/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 11:48:47 by beatriz           #+#    #+#             */
/*   Updated: 2026/03/14 19:18:54 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate()
{
	//usar o tempo atual como seed, pois srand usa seed
	std::srand(std::time(NULL));
	
	//resto(% 3) = a - (b * (a / b))
	//a = 17, b = 3
	//17 - (3 * (17 / 3)) ->  17 - (3 * 5)  -> 17 - 15  -> 2
	int r = rand() % 3;

	if (r == 0)
	{
		std::cout << "Gerou: A" << std::endl;
		return (new A());
	}
	else if (r == 1)
	{
		std::cout << "Gerou: B" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "Gerou: C" << std::endl;
		return (new C());
	}
}

void identify(Base* abc)
{
	if (dynamic_cast<A*>(abc))
		std::cout << "Class: A" << std::endl;
	else if (dynamic_cast<B*>(abc))
		std::cout << "Class: B" << std::endl;
	else if (dynamic_cast<C*>(abc))
		std::cout << "Class: C" << std::endl;
}

void identify(Base& abc)
{
	try
	{
		dynamic_cast<A&>(abc);
		std::cout << "Class: A" << std::endl;
		return ;
	}
	catch (...) {}

	try
	{
		dynamic_cast<B&>(abc);
		std::cout << "Class: B" << std::endl;
		return ;
	}
	catch (...) {}

	try
	{
		dynamic_cast<C&>(abc);
		std::cout << "Class: C" << std::endl;
		return ;
	}
	catch (...) {}
}

int main()
{
	Base* abc = generate();
	
	std::cout << "--Identify ponteiro--" << std::endl;
	identify(abc);

	std::cout << "--Identify referência--" << std::endl;
	identify(*abc);

	delete abc;
	return (0);
}
