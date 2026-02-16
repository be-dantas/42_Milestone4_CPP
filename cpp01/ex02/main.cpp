/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:14:22 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/16 16:14:23 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Memory address str: " << &str << std::endl;
	std::cout << "Memory address stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value str: " << str << std::endl;
	std::cout << "Value stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value stringREF: " << stringREF << std::endl;
	
	return (0);
}
