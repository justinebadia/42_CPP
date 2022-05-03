/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:31:11 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/03 09:28:33 by jbadia           ###   ########.fr       */
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


class Form
{
	public:
		Form(std::string name, unsigned int gradeSign, unsigned int gradeExec);
		Form();
		~Form();
		Form(Form const &copy);

		Form &operator=(Form const &rhs);
		std::string		getName(void) const;
		unsigned int 	getSignGrade(void) const;
		unsigned int 	getExecGrade(void) const;
		bool		 	isSigned(void) const;
		void 			beSigned(Bureaucrat &b);

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
		bool				_signed;
		const unsigned int	_gradeSign;
		const unsigned int	_gradeExec;

		void handleGradeException(unsigned int grade);
};

std::ostream &operator<<(std::ostream &o, Form const &f);

#endif 