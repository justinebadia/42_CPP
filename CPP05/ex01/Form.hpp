/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:31:11 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/02 17:57:59 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		std::string getName(void) const;
		unsigned int getSignGrade(void) const;
		unsigned int getExecGrade(void) const;
		bool		 isSigned(void) const;
		void 		beSigned(Bureaucrat &b);

	class GradeTooHighException
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException
	{
		public:
			virtual const char* what() const throw();
	};

	private:
		const std::string 	_name;
		bool				_signed;
		const unsigned int	_gradeSign;
		const unsigned int	_gradeExec;
};

std::ostream &operator<<(std::ostream &o, Form const &f);