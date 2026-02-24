/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:38:20 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/24 15:01:56 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _raw;
		static const int _nbits = 8;
	public:
		~Fixed();
		Fixed();
		Fixed(const Fixed &copyClass);
		Fixed(const int raw);
		Fixed(const float raw);
		
		Fixed &operator=(const Fixed &copyClass);
		Fixed operator+(const Fixed &copyClass);
		Fixed operator-(const Fixed &copyClass);
		Fixed operator*(const Fixed &copyClass);
		Fixed operator/(const Fixed &copyClass);

		bool operator>(const Fixed &copyClass) const;
		bool operator<(const Fixed &copyClass) const;
		bool operator>=(const Fixed &copyClass) const;
		bool operator<=(const Fixed &copyClass) const;
		bool operator==(const Fixed &copyClass) const;
		bool operator!=(const Fixed &copyClass) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
