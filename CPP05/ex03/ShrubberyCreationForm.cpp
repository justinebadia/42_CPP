/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:45:16 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/06 12:46:19 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
Form(target,"Shrubbery Creation Form", 145, 137)
{
    std::cout << "Shrubbery Creation Form constructor with target : " << target << std::endl;    
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Default","Shrubbery Creation Form", 145, 137)
{    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery Creation Form destructor." << std::endl;    
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy)
{
    *this = copy;
    std::cout << "Shrubbery Creation Form copy constructor." << std::endl;    
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    if (this != &rhs)
        *this = rhs;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->canExecute(executor))
        return ;
    std::string tree = "\t__/ \\__\n\t\\     /\n\t/    \\\n\t .\'o'\n\t.o.\'.\n   .\'.\'o\'.\n  o\'.o.\'.o.\n .\'.o.\'.\'.o.\n.o.\'.o.\'.o.'.\n   [_____]\n    \\___/   ";
    std::string name = this->getTarget() + "_shrubbery";
    std::ofstream file(name, std::ios::app);
    if (!file)
    {
        std::cout << RED "File error" NC << std::endl;
        return ;
    }
    file << tree;
}

