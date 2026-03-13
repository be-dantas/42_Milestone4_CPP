/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 09:42:43 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/12 11:17:11 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "./Converter <value>" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	std::cout << "\n";

	return (0);
}

/*
./Converter 42.0
./Converter 42.0f
./Converter 4.2
./Converter 4.2f
./Converter nan
./Converter nanf
./Converter +inf
./Converter -inf
./Converter +inff
./Converter -inff
./Converter 2147483648
./Converter 999999999999999999999
./Converter hello
./Converter .
./Converter 1..2
./Converter 42.5
*/