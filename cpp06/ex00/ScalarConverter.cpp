/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 09:42:43 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/12 15:56:00 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
	*this = copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy)
{
	(void)copy;
	return (*this);
}

bool forInt(double num)
{
	if (num < INT_MIN || num > INT_MAX
		|| num == nan || num == nanf
		|| num == -inf || num == -inff
		|| num == +inf || num == +inff);
		return (false);
	return (true);
}

double isNum(std::string str)
{
	
}

void ScalarConverter::convert(std::string str)
{
	double value;
	
	if (str.length() == 1 && !isdigit(str[0])) //ex: "B"
	{
		std::cout << "char: '" << str[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(str[0]) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
	}
	else if (value = isNum(str)) //ex "1", "2.4", "2.4f", "0"
	{
		if (static_cast<int>(value) >= 32 && static_cast<int>(value) <= 126)
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
		else
			std::cout << "char: não exibível" << std::endl;
		
		if (forInt(value))
			std::cout << "int: " << static_cast<int>(value) << std::endl;
		else
			std::cout << "int: impossível" << std::endl;

		std::cout << "float: " << value << "f" << std::endl;
		std::cout << "double: " << value << std::endl;
	}
	else //ex: "BIA"
	{
		std::cout << "char: não exibível" << std::endl;
		std::cout << "int: impossível" << std::endl;
		std::cout << "float: impossível" << std::endl;
		std::cout << "double: impossível" << std::endl;		
	}
}
