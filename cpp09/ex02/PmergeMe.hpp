/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 22:13:17 by beatriz           #+#    #+#             */
/*   Updated: 2026/04/03 01:03:27 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <utility>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <ctime>

class PmergeMe
{
	private:
		std::vector<int> v;
		std::deque<int> d;
		
	public:
		~PmergeMe();
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator=(const PmergeMe& copy);

		void initValidInput(int argc, char **argv);
		void initOrderMerge();
		void printContainer(const std::string str) const;
};

#endif