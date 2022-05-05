/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:31:11 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/05 16:38:02 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#define REDB "\e[41m"
#define BLUP "\e[94m"
#define CYNP "\e[96m"

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string target, std::string name, unsigned int gradeSign, unsigned int gradeExec);
		Form();
		virtual ~Form();
		Form(Form const &copy);

		Form &operator=(Form const &rhs);
		std::string		getName(void) const;
		std::string		getTarget(void) const;
		unsigned int 	getSignGrade(void) const;
		unsigned int 	getExecGrade(void) const;

		bool		 	isSigned(void) const;
		void 			beSigned(Bureaucrat &b);
		bool			canExecute(Bureaucrat const &b) const;
		virtual void	execute(Bureaucrat const &executor) const = 0;

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
		const std::string	_target;
		const std::string 	_name;
		bool				_signed;
		const unsigned int	_gradeSign;
		const unsigned int	_gradeExec;

		void handleGradeException(unsigned int grade);
};

std::ostream &operator<<(std::ostream &o, Form const &f);

#endif 