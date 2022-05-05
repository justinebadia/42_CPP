/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:03:32 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/05 17:04:27 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main (void)
{
	std::cout << "\n -------- BOB -------- \n";
	try
	{
		Bureaucrat Bob("Bob", 100);
		PresidentialPardonForm F("Pres");
		
		std::cout << Bob;
		std::cout << F;
		Bob.executeForm(F);
		Bob.signForm(F);
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << NC << std::endl;
	}
	
	
	std::cout << "\n -------- DAVE -------- \n";
	try
	{
		Bureaucrat Dave("Dave ", 70);
		RobotomyRequestForm R("Robot");

		std::cout << Dave;
		std::cout << R;
		Dave.executeForm(R);
		Dave.signForm(R);
		Dave.executeForm(R);
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << NC << std::endl;
	}

		
	std::cout << "\n -------- Tod -------- \n";
	try
	{
		Bureaucrat Tod("Tod ", 50);
		ShrubberyCreationForm P("Plop");
		
		std::cout << Tod;
		std::cout << P;
	
		Tod.executeForm(P);
		Tod.signForm(P);
		Tod.executeForm(P);

	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << NC << std::endl;
	}

	// std::cout << "\n -------- FORM C23 -------- \n";
	// try
	// {
	// 	Form form("C23", 12, 340);
	// 	std::cout << form;
		
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << NC << std::endl;
	// }
	
	// std::cout << "\n -------- FORM C23 -------- \n";
	// try
	// {
	// 	Form form2("AA", 155, 3);
	// 	std::cout << form2;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << NC << std::endl;
	// }

	// std::cout << "\n -------- FORM H22 -------- \n";
	// try
	// {
	// 	Form form2("H22", 15, 3);
	// 	Bureaucrat Bobby("Bobby", 78);
	// 	std::cout << form2;
	// 	std::cout << Bobby;
	// 	Bobby.signForm(form2);
	// 	std::cout << form2;

	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << NC << std::endl;
	// }
	// std::cout << "\n -------- FORM H22 -------- \n";
	// try
	// {
	// 	Form form2("H22", 15, 3);
	// 	Bureaucrat Bob ("Bob", 4);
	// 	std::cout << form2;
	// 	std::cout << Bob;
	// 	Bob.signForm(form2);
	// 	std::cout << form2;

	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << NC << std::endl;
	// }
	
	return 0;
}