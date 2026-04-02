/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 21:01:00 by beatriz           #+#    #+#             */
/*   Updated: 2026/04/01 21:59:11 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <cctype>

class RPN
{
	private:
		std::stack<int> s;
		
	public:
		~RPN();
		RPN();
		RPN(const RPN& copy);
		RPN& operator=(const RPN& copy);

		int revPolishNotation(const std::string& input);
};

#endif