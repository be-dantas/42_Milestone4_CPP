/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 21:07:37 by beatriz           #+#    #+#             */
/*   Updated: 2026/04/01 22:05:43 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::~RPN() {}

RPN::RPN() {}

RPN::RPN(const RPN& copy) {
	*this = copy;
}

RPN& RPN::operator=(const RPN& copy)
{
	if (this != &copy)
		this->s = copy.s;
	return (*this);
}

int RPN::revPolishNotation(const std::string& input)
{
	std::stack<int> s;
	std::istringstream iss(input);
	std::string tokenIss;
	int result;

	while (iss >> tokenIss)
	{
		if (tokenIss.size() != 1) {
			throw std::runtime_error("Error"); }

		if (isdigit(tokenIss[0]))
			s.push(tokenIss[0] - '0');

		else if (tokenIss[0] == '+' || tokenIss[0] == '-' || tokenIss[0] == '*' || tokenIss[0] == '/')
		{
			if (s.size() < 2) {
				throw std::runtime_error("Error"); }
				
			int b = s.top();
			s.pop();
			int a = s.top();
			s.pop();
			
			if (tokenIss[0] == '+')
				result = a + b;
			else if (tokenIss[0] == '-')
				result = a - b;
			else if (tokenIss[0] == '*')
				result = a * b;
			else if (tokenIss[0] == '/')
			{
				if (b == 0) {
					throw std::runtime_error("Error"); }
				result = a / b;
			}

			s.push(result);
		}
	}
	
	if (s.size() != 1) {
		throw std::runtime_error("Error"); }

	return s.top();	
}
