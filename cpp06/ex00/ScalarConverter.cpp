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

/*****************************************************************************/

bool isNum(std::string str)
{
	int dot  = 0;

	if (str[0] != '-' && str[0] != '+' && !isdigit(str[0]))
		return (false);
	if ((str[0] == '-' || str[0] == '+'))
	{
		if (str.length() < 2 || !isdigit(str[1]))
			return (false);
	}

	for (size_t i = 1; i + 1 < str.length(); i++)
    {
		if (str[i] == '.')
		{
			dot++;
			if (!isdigit(str[i + 1]))
				return (false);
		}
		else if (!isdigit(str[i]))
			return (false);
    }

	if (dot > 1 || (!isdigit(str.back()) && str.back() != 'f'))
		return (false);

	return (true);
}

bool isNanInf(std::string str)
{
	if (str == "nan" || str == "nanf" ||
		str == "+inf" || str == "+inff" ||
		str == "-inf" || str == "-inff")
		return (true);
	return (false);
}

void ScalarConverter::convert(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
	{
		std::cout << "char: '" << str[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(str[0]) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
	}
	else if (isNanInf(str))
	{
		std::cout << "char: impossível" << std::endl;
		std::cout << "int: impossível" << std::endl;

		if (str == "nanf" || str == "+inff" || str == "-inff")
		{
			std::cout << "float: " << str << std::endl;
			std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
		}
		else
		{
			std::cout << "float: " << str << "f" << std::endl;
			std::cout << "double: " << str << std::endl;
		}
	}
	else if (isNum(str))
	{
		//str para double
		double dValue;
		try
		{
			if (str.back() == 'f')
				dValue = std::stod(str.substr(0, str.length() - 1));
			else
				dValue = std::stod(str);
		}
		catch (const std::exception& e)
		{
			std::cout << "char: impossível" << std::endl;
			std::cout << "int: impossível" << std::endl;
			std::cout << "float: impossível" << std::endl;
			std::cout << "double: impossível" << std::endl;
			return ;
		}

		//char
		if (dValue < 0 || dValue > 126 || dValue != static_cast<int>(dValue))
			std::cout << "char: impossível" << std::endl;
		else if (!std::isprint(static_cast<char>(dValue)))
			std::cout << "char: Não exibível" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(dValue) << "'" << std::endl;
		
		//int
		if (dValue < INT_MIN || dValue > INT_MAX)
			std::cout << "int: impossível" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(dValue) << std::endl;

		//força a saída em notação decimal fixa
		std::cout << std::fixed << std::setprecision(1);

		//float
		if (dValue < -std::numeric_limits<float>::max() || dValue > std::numeric_limits<float>::max())
			std::cout << "float: impossível" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(dValue) << "f" << std::endl;

		//double
		std::cout << "double: " << dValue << std::endl;
	}
	else
	{
		std::cout << "char: impossível" << std::endl;
		std::cout << "int: impossível" << std::endl;
		std::cout << "float: impossível" << std::endl;
		std::cout << "double: impossível" << std::endl;		
	}
}
