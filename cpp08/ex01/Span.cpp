/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 12:36:56 by beatriz           #+#    #+#             */
/*   Updated: 2026/03/21 17:50:55 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::~Span() {}

Span::Span() : N(0) {}

Span::Span(unsigned int num) : N(num) {}

Span::Span(const Span& copy) {
	*this = copy; }

Span& Span::operator=(const Span& copy)
{
	if (this != &copy)
	{
		this->container = copy.container;
		this->N = copy.N;
	}
	return (*this);
}

void Span::addNumber(int value)
{
	if (container.size() >= N)
		throw std::runtime_error("The container is full");
	container.push_back(value);
}

unsigned int Span::shortestSpan() const
{
	if (container.size() < 2)
		throw std::runtime_error("Few values in the container");

	int minSpan;
	int diff;
	std::vector<int> temp = container;
	
	std::sort(temp.begin(), temp.end());
	minSpan = temp[1] - temp[0];
	
	for (size_t i = 2; i < temp.size(); i++)
	{
		diff = temp[i] - temp[i - 1];
		if (diff < minSpan)
			minSpan = diff;
	}
	
	return (minSpan);	
}

unsigned int Span::longestSpan() const
{
	if (container.size() < 2)
		throw std::runtime_error("Few values in the container");

	int longSpan;
	int max;
	int min;

	max = *std::max_element(container.begin(), container.end());
	min = *std::min_element(container.begin(), container.end());
	longSpan = max - min;

	return (longSpan);
}
