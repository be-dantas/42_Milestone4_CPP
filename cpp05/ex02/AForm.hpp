/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:04:36 by bedantas          #+#    #+#             */
/*   Updated: 2026/03/04 18:41:26 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int execGrade;
	public:
		~AForm();
		AForm();
		AForm(const std::string newName, const int newSign, const int newExec);
		AForm(const AForm& copy);
		AForm& operator=(const AForm& copy);

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
		class FormNotSignedException : public std::exception {
			const char* what() const throw();
		};

		const std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void beSigned(const Bureaucrat& b);
		void execute(Bureaucrat const & executor) const;
		virtual void execForm() const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif