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

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

//Resumo da classe:
//Deve criar um tipo Bureaucrat que:
//Recebe nome e grade
//Permite subir ou descer
//Impede sair do intervalo
//Lança exceção quando necessário


/* Resumo de objeto para erro:
separar lógica normal do tratamento
propagação automática
tratamento flexível
hierarquia de erros
captura por tipo

Analogia simples1:
Imagine uma fábrica.
Se uma máquina quebra:

❌ Máquina resolve tudo sozinha (se fosse uma função de erro)
(imprime erro e continua)

✔ Máquina dispara um alarme (classe/objeto para erro)
O gerente decide:
parar a linha
trocar a peça
chamar manutenção
A exceção é esse alarme. */


class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		~Bureaucrat();
		Bureaucrat();
		Bureaucrat(std::string newName, int newGrade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		
		const std::string getName() const;
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif