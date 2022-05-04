/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:03:32 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/04 12:24:48 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	std::cout << "\n -------- BOB -------- \n";
	try
	{
		Bureaucrat Bob("Bob", 1);
		std::cout << Bob;
		Bob.grade();
		std::cout << Bob;

	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}
	
	
	std::cout << "\n -------- DAVE -------- \n";
	try
	{
		Bureaucrat Dave("Dave ", 150);
		std::cout << Dave;
		Dave.degrade();
		std::cout << Dave;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}

		
	std::cout << "\n -------- Tod -------- \n";
	try
	{
		Bureaucrat Tod("Tod ", 50);
		std::cout << Tod;
		Tod.degrade();
		std::cout << Tod;
		Tod.grade();
		std::cout << Tod;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}


	std::cout << "\n -------- CHONCHON -------- \n";
	try
	{
		Bureaucrat Chonchon ("Chonchon", 153);
		std::cout << Chonchon;
		Bureaucrat Chonchette ("Chonchette", 0);
		std::cout << Chonchette;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}

		std::cout << "\n -------- CHONCHETTE -------- \n";
	try
	{
		Bureaucrat Chonchette ("Chonchette", 0);
		std::cout << Chonchette;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}
	
	return 0;
}