/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:37:43 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/20 11:33:45 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed()
{
	_raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copyClass) //sem & ficaria em loop infinito
{
	*this = copyClass; //operador = faz uma cópia da referencia recebida
	std::cout << "Copy constructor called" << std::endl;
}

// Fixed::sobrecarga do operador de atribuição de cópia
// {
// 	...
// 	std::cout << "Copy assignment operator called" << std::endl;
// }

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw);
}

void Fixed::setRawBits(int const raw)
{
	_raw = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
