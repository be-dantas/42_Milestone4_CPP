/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 22:13:17 by beatriz           #+#    #+#             */
/*   Updated: 2026/04/02 16:55:11 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <climits>

class PmergeMe
{
	private:
		std::vector<int> v;
		
	public:
		~PmergeMe();
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator=(const PmergeMe& copy);

		void printVector(const std::string str) const;
		void validInput(int argc, char **argv);
		//void orderMerge();
};

#endif