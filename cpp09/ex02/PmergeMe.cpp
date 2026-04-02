/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 22:15:55 by beatriz           #+#    #+#             */
/*   Updated: 2026/04/02 19:45:57 by beatriz          ###   ########.fr       */
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
	(void)copy;
	return *this;
}

/******************************************************************************/

void PmergeMe::printVector(const std::string str) const
{
	std::cout << str;
	
	for (std::vector<int>::const_iterator it = this->v.begin(); it != this->v.end(); ++it)
		std::cout << *it << " ";
	
	std::cout << std::endl;
}

void PmergeMe::initValidInput(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		char* end;
		long num;

		num = std::strtol(argv[i], &end, 10);
		if (argv[i][0] == '\0' || *end != '\0' || num < 0 || num > INT_MAX)
			throw std::runtime_error("Error");
		
		v.push_back(static_cast<int>(num));
	}
}

/******************************************************************************/

//criar pares ja ordenados(3,8) → separar(big e small) → ordenar big → inserir menores

void insertBig(std::vector<int>& big, int& newItem)
{
	std::vector<int>::iterator pos;
	
	pos = std::lower_bound(big.begin(), big.end(), newItem);
	big.insert(pos, newItem);
}

void initPairs(std::vector<int>& vec, std::vector<std::pair<int, int> >& pairs, int& rest)
{
	for (size_t i = 0; i < vec.size(); i += 2)
	{
		if (i + 1 < vec.size())
		{
			int a = vec[i];
			int b = vec[i + 1];
			if (a > b)
				std::swap(a, b);
			pairs.push_back(std::pair<int, int>(a, b));
		}
		else
			rest = vec[i];
	}
}

void orderMerge(std::vector<int>& vec)
{
	if (vec.size() <= 1)
        return ;
	
	std::vector<std::pair<int, int> > pairs;
	std::vector<int> small;
	std::vector<int> big;
	int rest = -1;

	initPairs(vec, pairs, rest);
	
	for (size_t i = 0; i < pairs.size(); i++)
	{
		small.push_back(pairs[i].first);
		big.push_back(pairs[i].second);
	}

	orderMerge(big);

	for (size_t i = 0; i < small.size(); i++)
		insertBig(big, small[i]);
	
	if (rest != -1)
		insertBig(big, rest);

	vec = big;	
}

void PmergeMe::initOrderMerge() {
	orderMerge(v);
}