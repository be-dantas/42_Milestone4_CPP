/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:37:43 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/20 16:49:39 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_raw = 0;
}

Fixed::Fixed(const Fixed &copyClass)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copyClass;
}

Fixed& Fixed::operator=(const Fixed &copyClass)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copyClass)
		this->_raw = copyClass._raw;
	return (*this);
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int constructor called" << std::endl;
	_raw = raw << _nbits;
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	_raw = roundf(raw * (1 << _nbits));
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_raw = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)_raw / (1 << _nbits));
}

int Fixed::toInt(void) const
{
	return (_raw >> _nbits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
