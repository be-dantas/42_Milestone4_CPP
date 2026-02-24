/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:37:43 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/24 15:11:37 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed() {}

Fixed::Fixed()
{
	_raw = 0;
}

Fixed::Fixed(const Fixed &copyClass)
{
	*this = copyClass;
}

Fixed::Fixed(const int raw)
{
	_raw = raw << _nbits;
}

Fixed::Fixed(const float raw)
{
	_raw = roundf(raw * (1 << _nbits));
}

/***************************************************************/

Fixed& Fixed::operator=(const Fixed &copyClass)
{
	if (this != &copyClass)
		this->_raw = copyClass._raw;
	return (*this);
}

Fixed Fixed::operator+(const Fixed &copyClass)
{
	Fixed result;
	
	result.setRawBits(this->_raw + copyClass._raw);
	return (result);
}

Fixed Fixed::operator-(const Fixed &copyClass)
{
	Fixed result;
	
	result.setRawBits(this->_raw - copyClass._raw);
	return (result);
}

Fixed Fixed::operator*(const Fixed &copyClass)
{
	Fixed result;
	
	result.setRawBits((this->_raw * copyClass._raw) >> _nbits);
	return (result);
}

Fixed Fixed::operator/(const Fixed &copyClass)
{
	Fixed result;
	
	result.setRawBits((this->_raw << _nbits) / copyClass._raw);
	return (result);
}

/***************************************************************/

bool Fixed::operator>(const Fixed &copyClass) const
{
	return (this->_raw > copyClass._raw);
}

bool Fixed::operator<(const Fixed &copyClass) const
{
	return (this->_raw < copyClass._raw);
}

bool Fixed::operator>=(const Fixed &copyClass) const
{
	return (this->_raw >= copyClass._raw);
}

bool Fixed::operator<=(const Fixed &copyClass) const
{
	return (this->_raw <= copyClass._raw);
}

bool Fixed::operator==(const Fixed &copyClass) const
{
	return (this->_raw == copyClass._raw);
}

bool Fixed::operator!=(const Fixed &copyClass) const
{
	return (this->_raw != copyClass._raw);
}

/***************************************************************/

Fixed& Fixed::operator++()
{
	_raw++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_raw++;
	return (temp);
}

Fixed& Fixed::operator--()
{
	_raw--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	_raw--;
	return (temp);
}

/***************************************************************/

int Fixed::getRawBits(void) const
{
	return (_raw);
}

void Fixed::setRawBits(int const raw)
{
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

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

/***************************************************************/

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
