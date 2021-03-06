/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 09:21:42 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/05 08:32:14 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"

#include <string>
#include <iostream>
#include <exception>

#include "Form.hpp"

/*declares the class without defining it. Can only be use for
reference or pointer*/
class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &copy);
		virtual ~Bureaucrat() throw();

		Bureaucrat		&operator=(Bureaucrat const &rhs);
		
		std::string		getName(void) const;
		unsigned int	getGrade(void) const;
		void 			grade(void);
		void 			degrade(void);
		void			signForm(Form &f);
		

	/*Les méthodes de la classe sont suivies du mot clé throw.
Il sert à indiquer que ces méthodes ne vont pas lancer 
d'exceptions.*/
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

		class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	private:
		const std::string 	_name;
		unsigned int		_grade;

		void 	handleException(void);
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif