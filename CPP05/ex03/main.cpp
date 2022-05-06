/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:03:32 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/06 13:37:46 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main (void)
{
	std::cout << "\n -------- BOB -------- \n";
	Intern intern;
	Form *F;
	try
	{
		Bureaucrat Bob("Bob", 100);

		F = intern.makeForm("PresidentialPardonForm", "PLOUP");
		std::cout << Bob;
		std::cout << *F;
		Bob.executeForm(*F);
		Bob.signForm(*F);
		Bob.executeForm(*F);
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << NC << std::endl;
	}
	delete F;

	std::cout << "\n -------- DAVE -------- \n";
	Form *Q = intern.makeForm("RobotomyRequestForm", "ROBOTOS");
	try
	{
		Bureaucrat Dave("Dave ", 45);
		if (Q != NULL)
		{
			std::cout << Dave;
			std::cout << *Q;
			Dave.executeForm(*Q);
			Dave.signForm(*Q);
			Dave.executeForm(*Q);
			Dave.grade();
			Dave.executeForm(*Q);
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << NC << std::endl;
	}
	delete Q;

		
	std::cout << "\n -------- Tod -------- \n";
	Form *P = intern.makeForm("RobotomyRequestForm", "ROBOTOS");
	try
	{
		Bureaucrat Tod("Tod ", 50);
		std::cout << Tod;
		if (P != NULL)
		{
			std::cout << *P;
			Tod.executeForm(*P);
			Tod.signForm(*P);
			Tod.executeForm(*P);
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << NC << std::endl;
	}
	delete P;

	std::cout << "\n -------- BOB -------- \n";
	Form *G;
	try
	{
		Bureaucrat Bob("Bob", 100);

		G = intern.makeForm("ERREUR", "PLOUP");
		std::cout << Bob;
		if (G != NULL)
		{
			std::cout << *G;
			Bob.executeForm(*G);
			Bob.signForm(*G);
			Bob.executeForm(*G);
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << NC << std::endl;
	}
	delete G;
	
	return 0;
}