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
	//força a saída em notação decimal fixa. "Não use notação científica"
	std::cout << std::fixed << std::setprecision(1);
	
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
	else
	{
		char* endStr;
		errno = 0;
		double dValue = std::strtod(str.c_str(), &endStr);
		bool isFloat = (*endStr == 'f' && *(endStr + 1) == '\0');
		bool overflow = (errno == ERANGE && (dValue == HUGE_VAL || dValue == -HUGE_VAL));

		//endStr está no começo da str || endStr não parou no final e não é float
		if (endStr == str.c_str() || (*endStr != '\0' && !isFloat))
		{
			std::cout << "char: impossível" << std::endl;
			std::cout << "int: impossível" << std::endl;
			std::cout << "float: impossível" << std::endl;
			std::cout << "double: impossível" << std::endl;
			return ;
		}

		//char
		if (overflow || dValue < 0 || dValue > 127 || dValue != static_cast<int>(dValue))
			std::cout << "char: impossível" << std::endl;
		else if (!std::isprint(static_cast<char>(dValue))) //não é de 32 a 126
			std::cout << "char: Não exibível" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(dValue) << "'" << std::endl;
		
		//int
		if (overflow || dValue < INT_MIN || dValue > INT_MAX)
			std::cout << "int: impossível" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(dValue) << std::endl;

		//float
		if (overflow || dValue < -FLT_MAX || dValue > FLT_MAX)
			std::cout << "float: impossível" << std::endl;
		else
			std::cout << "float: " << dValue << "f" << std::endl;;

		//double
		if (overflow)
			std::cout << "double: impossível" << std::endl;
		else
			std::cout << "double: " << dValue << std::endl;
	}
}
