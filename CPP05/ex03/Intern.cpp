/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:33:45 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/06 13:17:04 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
    _name[0] = "ShrubberyCreationForm";
    _name[1] = "RobotomyRequestForm";
    _name[2] = "PresidentialPardonForm";
    _create[0] = &Intern::createShrubberyForm;
    _create[1] = &Intern::createRobotomyForm;
    _create[2] = &Intern::createPresidentialForm;
}

Intern::~Intern()
{}

Intern::Intern(Intern const &copy)
{
    *this = copy;
}

Intern &Intern::operator=(Intern const &rhs)
{
    if (this != &rhs)
		*this = rhs;
	return *this;
}

Form    *Intern::createShrubberyForm(std::string const &target)
{
    return new ShrubberyCreationForm(target);
}

Form    *Intern::createRobotomyForm(std::string const &target)
{
    return new RobotomyRequestForm(target);
}

Form    *Intern::createPresidentialForm(std::string const &target)
{
    return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string const &nameForm, std::string const &target)
{
    Form *form = NULL;
    int i = 0;

    for (; i < 3; i++)
    {
        if (nameForm ==_name[i])
        {
            form = (this->*_create[i])(target);
            std::cout << CYN "Intern creates form : " << form->getName() << NC << std::endl;
        }
        else if (i == 2)
            std::cout << RED << "Ce formulaire n'existe pas" << NC << std::endl;
    }
    return form;
}