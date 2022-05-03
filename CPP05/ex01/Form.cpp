/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:31:13 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/03 11:40:33 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, unsigned int gradeSign, unsigned int gradeExec) : 
		_name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	Form::handleGradeException(_gradeSign);
	Form::handleGradeException(_gradeExec);
	return ;
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
		if (b.getGrade() > this->_gradeSign || b.getGrade() > this->_gradeExec)
			throw GradeTooLowException();
		else if (b.getGrade() <= this->_gradeSign || b.getGrade() <= this->_gradeExec)
			this->_signed = true;
	}
	catch(const std::exception &e)
	{
		std::cout << REDB <<  _name << e.what() << NC << std::endl;
	}
	
}

void Form::handleGradeException(unsigned int grade)
{
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		else if ( grade < 1)
			throw GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cout << REDB <<  _name << e.what() << NC << std::endl;
	}
	return ;
}

std::ostream &operator<<(std::ostream &o, Form const &f)
{
	std::string str;

	if (f.isSigned() == true)
		str = "signé";
	else
		str = "non signé";

	o << CYNP << "Formulaire " << f.getName() <<  " est " << str << ". Il nécéssite le grade " 
	<< f.getSignGrade() << " pour être signé et le grade " << f.getExecGrade() << " pour être exécuté. \n" NC; 

	return o;
}