/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:42:14 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/05 16:38:48 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
Form(target,"Robotomy Request Form", 72, 45)
{
    std::cout << "Robotomy Request Form constructor with target : " << target << std::endl;    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robotomy Request Form destructor." << std::endl;    
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy)
{
    *this = copy;
    std::cout << "Robotomy Request Form copy constructor." << std::endl;    
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    if (this != &rhs)
        *this = rhs;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->canExecute(executor))
        return ;
    std::cout << "Bzzziou Bzzziouuu !!" << this->getTarget() << "a été robotomisé ! " << std::endl;
}