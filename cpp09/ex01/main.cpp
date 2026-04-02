/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:40:30 by beatriz           #+#    #+#             */
/*   Updated: 2026/04/01 22:05:38 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool validInput(const std::string& input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		if (!isdigit(input[i]) 
			&& input[i] != '+'
			&& input[i] != '-'
			&& input[i] != '*' 
			&& input[i] != '/' 
			&& input[i] != ' ')
			return false;
	}
	return true;
}

int main(int argc, char **argv)
{
	if (argc != 2 || !validInput(argv[1])) {
		std::cout << "Error" << std::endl;
		return 1; }

	try
	{
		RPN rpn;
		int result = rpn.revPolishNotation(argv[1]);
		std::cout << result << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	
	return 0;
}
