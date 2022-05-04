/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 09:21:44 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/04 12:20:35 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
    std::cout << VIO << _name << " constructeur." NC << std::endl;
	Bureaucrat::handleException();
}

Bureaucrat::Bureaucrat() : _name("Bobby-Bob"), _grade(150)
{
	std::cout << VIO << _name << " constructeur par défaut." NC << std::endl;
	Bureaucrat::handleException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
    std::cout << VIO << _name << " constructeur de recopie." NC << std::endl;
	
	return ; 
}

Bureaucrat::~Bureaucrat() throw()
{
    std::cout << VIO << _name << " destructeur." NC << std::endl;
	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

unsigned int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::grade(void)
{
	this->_grade--;
	std::cout << GRN "Promote " << _name << " to grade " BLU << _grade << GRN " ?\n" << NC;
	Bureaucrat::handleException();
}

void Bureaucrat::degrade(void)
{
	this->_grade++;
	std::cout << GRN "Degrade " << _name << " to grade " BLU << _grade << GRN " ?\n" << NC;
	Bureaucrat::handleException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high !";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low !";
}

void Bureaucrat::handleException(void)
{
		if (this->_grade > 150)
			throw GradeTooLowException();
		else if (this->_grade < 1)
			throw GradeTooHighException();
	return ;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << GRN << rhs.getName() << ", Bureaucrat grade : " << BLU << rhs.getGrade() << NC << std::endl; 
	return o;
}