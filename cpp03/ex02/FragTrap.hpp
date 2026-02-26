/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 13:52:47 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/26 13:54:55 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
	
	public:
		~FragTrap();
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap &copyClass);
		
		FragTrap &operator=(const FragTrap &frag);

		void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif
