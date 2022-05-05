/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 08:45:33 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/05 16:38:33 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
Form(target,"Presidential Pardon Form", 25, 5)
{
    std::cout << "Presidential Pardon Form constructor with target : " << target << std::endl;    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential Pardon Form destructor." << std::endl;    
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy)
{
    *this = copy;
    std::cout << "Presidential Pardon Form copy constructor." << std::endl;    
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (this != &rhs)
        *this = rhs;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
     if (!this->canExecute(executor))
        return ;
    std::cout << this->getTarget() << " a été pardonnée par Zaphod Beeblebrox." << std::endl;
}
