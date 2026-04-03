/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 22:15:55 by beatriz           #+#    #+#             */
/*   Updated: 2026/04/03 01:03:13 by beatriz          ###   ########.fr       */
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
	if (this != &copy)
	{
		this->v = copy.v;
		this->d = copy.d;
	}
	return *this;
}

/******************************************************************************/

void PmergeMe::printContainer(const std::string str) const
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
		d.push_back(static_cast<int>(num));
	}
}

/******************************************************************************/

//criar pares ja ordenados(3,8) → separar(big e small) → ordenar big → inserir menores

std::vector<size_t> buildJacobOrder(size_t n)
{
	std::vector<size_t> order;
	if (n == 0)
		return order;

	std::vector<size_t> jacob;
	jacob.push_back(1);
	jacob.push_back(3);

	while (jacob.back() < n)
	{
		size_t next = jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2];
		jacob.push_back(next);
	}

	size_t prev = 1;

	for (size_t i = 0; i < jacob.size(); i++)
	{
		size_t curr = std::min(jacob[i], n);
		for (size_t j = curr; j > prev; --j)
			order.push_back(j - 1);
		prev = curr;
	}

	// garantir que todos índices foram usados
	for (size_t i = 0; i < n; i++)
	{
		if (std::find(order.begin(), order.end(), i) == order.end())
			order.push_back(i);
	}

	return order;
}

void orderMergeVector(std::vector<int>& vec)
{
	if (vec.size() <= 1)
		return ;
	
	std::vector<std::pair<int, int> > pairs;
	std::vector<int> small;
	std::vector<int> big;
	int rest = -1;

	//ordenar, criar pares e colocar no vector
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
	
	//separar em big e small
	for (size_t i = 0; i < pairs.size(); i++)
	{
		small.push_back(pairs[i].first);
		big.push_back(pairs[i].second);
	}

	orderMergeVector(big);

	//colocar small em big (Jacobsthal)
	std::vector<size_t> order = buildJacobOrder(small.size());

	for (size_t k = 0; k < order.size(); k++)
	{
		size_t i = order[k];
		std::vector<int>::iterator pos = std::lower_bound(big.begin(), big.end(), small[i]);
		big.insert(pos, small[i]);
	}
	
	//colocar rest em big
	if (rest != -1)
	{
		std::vector<int>::iterator pos = std::lower_bound(big.begin(), big.end(), rest);
		big.insert(pos, rest);
	}

	vec = big;
}

void orderMergeDeque(std::deque<int>& deq)
{
	if (deq.size() <= 1)
		return ;
	
	std::deque<std::pair<int, int> > pairs;
	std::deque<int> small;
	std::deque<int> big;
	int rest = -1;

	//ordenar, criar pares e colocar no deque
	for (size_t i = 0; i < deq.size(); i += 2)
	{
		if (i + 1 < deq.size())
		{
			int a = deq[i];
			int b = deq[i + 1];
			if (a > b)
				std::swap(a, b);
			pairs.push_back(std::pair<int, int>(a, b));
		}
		else
			rest = deq[i];
	}
	
	//separar em big e small
	for (size_t i = 0; i < pairs.size(); i++)
	{
		small.push_back(pairs[i].first);
		big.push_back(pairs[i].second);
	}

	orderMergeDeque(big);

	//colocar small em big (Jacobsthal)
	std::vector<size_t> order = buildJacobOrder(small.size());

	for (size_t k = 0; k < order.size(); k++)
	{
		size_t i = order[k];
		std::deque<int>::iterator pos = std::lower_bound(big.begin(), big.end(), small[i]);
		big.insert(pos, small[i]);
	}
	
	//colocar small em big
	//for (size_t i = 0; i < small.size(); i++)
	//{
	//	std::deque<int>::iterator pos = std::lower_bound(big.begin(), big.end(), small[i]);
	//	big.insert(pos, small[i]);
	//}
	
	//colocar rest em big
	if (rest != -1)
	{
		std::deque<int>::iterator pos = std::lower_bound(big.begin(), big.end(), rest);
		big.insert(pos, rest);
	}

	deq = big;
}

void PmergeMe::initOrderMerge()
{
	printContainer("Before: ");
	
	clock_t start_v = clock();
	orderMergeVector(v);
	clock_t end_v = clock();
	double time_v = (double)(end_v - start_v) / CLOCKS_PER_SEC * 1000000;

	clock_t start_d = clock();
	orderMergeDeque(d);
	clock_t end_d = clock();
	double time_d = (double)(end_d - start_d) / CLOCKS_PER_SEC * 1000000;
	
	printContainer("After: ");
	
	std::cout << "Time to process a range of " << v.size() << " elements with std::vector: " << time_v << " us" << std::endl;
	std::cout << "Time to process a range of " << d.size() << " elements with std::deque: " << time_d << " us" << std::endl;
}
