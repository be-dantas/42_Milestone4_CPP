/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 22:15:55 by beatriz           #+#    #+#             */
/*   Updated: 2026/04/02 16:27:40 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& copy) {
	*this = copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& copy)
{
	void(copy);
	return *this;
}

/******************************************************************************/

void PmergeMe::validInput(const int argc, const char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		char* end;
		long num;

		num = std::strtol(argv[i], &end, 10);
		if (*end != '\0', num < 0, num > INT_MAX)
			throw std::runtime_error("Error");
	}
}