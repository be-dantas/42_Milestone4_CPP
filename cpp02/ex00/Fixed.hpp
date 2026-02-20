/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:38:20 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/20 11:30:54 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _raw;
		static const int _nbits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copyClass);
		//sobrecarga do operador de atribuição de cópia
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif