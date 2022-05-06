/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:31:13 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/06 13:27:31 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string target, std::string name, unsigned int gradeSign, unsigned int gradeExec) : 
		_target(target), _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    std::cout << VIO << _name << " constructeur. " << "Grade de signature : " BLU << _gradeSign 
	<< VIO " et grade d'exécution : " BLU << _gradeExec << NC << std::endl;
	Form::handleGradeException(_gradeSign);
	Form::handleGradeException(_gradeExec);
	return ;
}

Form::Form() : _target("target"), _name("Form A4"), _signed(false),  _gradeSign(150), _gradeExec(150)
{}

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

std::string Form::getTarget(void) const
{
	return this->_target;
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

		if (b.getGrade() > this->_gradeSign)
			throw GradeTooLowException();
		else if (b.getGrade() <= this->_gradeSign)
			this->_signed = true;
}

void Form::handleGradeException(unsigned int grade)
{
		if (grade > 150)
			throw GradeTooLowException();
		else if ( grade < 1)
			throw GradeTooHighException();
	return ;
}

bool Form::canExecute(Bureaucrat const &b) const
{
	if (this->_signed == false)
	{
		std::cout << RED << b.getName() << " ne peut pas exécuter le formulaire car il n'est pas signé." << NC << std::endl;
		return false;
	}
	else if (b.getGrade() > this->_gradeExec)
	{
		std::cout << RED << b.getName() << " a le grade " << b.getGrade() << " alors que le formulaire "
		<< this->getName() << " nécessite le grade " << this->getExecGrade() << ". Il ne peut pas l'exécuter." NC << std::endl;
		throw GradeTooLowException();
	}
	return true;
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