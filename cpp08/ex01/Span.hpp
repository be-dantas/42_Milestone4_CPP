/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 12:29:37 by beatriz           #+#    #+#             */
/*   Updated: 2026/03/21 17:47:48 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
	private:
		std::vector<int> container;
		unsigned int N;
		
	public:
		~Span();
		Span();
		Span(unsigned int num);
		Span(const Span& copy);
		Span& operator=(const Span& copy);

		void addNumber(int value);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		template <typename Iterator>
		void addRange(Iterator begin, Iterator end)
		{
			unsigned int dist;

			dist = std::distance(begin, end);
			if (dist + container.size() > N)
				throw std::runtime_error("Insufficient space in the container");
			container.insert(container.end(), begin, end);
		}
};

#endif