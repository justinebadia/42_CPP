/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:31:13 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/02 18:15:09 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, unsigned int gradeSign, unsigned int gradeExec) : 
		_name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	
}

Form::Form() : _name("Form A4"), _signed(false),  _gradeSign(150), _gradeExec(150)
{
}

Form::~Form()
{}

Form::Form(Form const &copy) : _gradeSign(150), _gradeExec(150)
{
	*this = copy;
}

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

std::string Form::getName(void) const
{
	return this->_name;
}

unsigned int Form::getSignGrade(void) const
{
	return this->_gradeSign;
}

unsigned int Form::getExecGrade(void) const
{
	return this->_gradeExec;
}

bool Form::isSigned(void) const
{
	if (this->_signed == true)
		return true;
	else
		return false;
}


const char* Form::GradeTooHighException::what() const throw()
{
	return " Grade too high !";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return " Grade too low !";
}

void	Form::beSigned(Bureaucrat &b)
{
	try
	{
		if (b.getGrade() >= this->_gradeSign && b.getGrade() >= this->_gradeExec)
			throw GradeTooLowException();
		else if (b.getGrade() <= this->_gradeSign && b.getGrade() <= this->_gradeExec)
			throw GradeTooHighException();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	
}

std::ostream &operator<<(std::ostream &o, Form const &f)
{
	std::string str;

	if (f.isSigned() == true)
		str = "signé";
	else
		str = "non signé";

	o << "Formulaire " << f.getName() <<  " est " << str << ". Il nécéssite le grade " 
	<< f.getSignGrade() << " pour être signé et le grade " << f.getExecGrade() << " pour être exécuté. \n"; 

	return o;
}