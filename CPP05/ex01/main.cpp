/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:03:32 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/02 18:14:44 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
	std::cout << " -------- NORMAUX -------- \n";
	Bureaucrat Bob("Bob", 1);
	Bureaucrat Dave("Dave ", 150);
	Bureaucrat Ted;
	Bureaucrat Tod("Tod ", 50);

	std::cout << std::endl;
	std::cout << Bob;
	std::cout << Dave;
	std::cout << Ted;
	std::cout << Tod;
	std::cout << std::endl;

	std::cout << " -------- EXCEPTIONS -------- \n";
	Form form("C23", 12, 34);
	std::cout << form;
	form.beSigned(Tod);

	Bureaucrat Chonchon ("Chonchon", 153);
	std::cout << Chonchon;
	Bureaucrat Chonchette ("Chonchette", 0);
	std::cout << Chonchette;
	
	std::cout << std::endl;
	std::cout << " -------- DESTRUCTEURS -------- \n";

	return 0;
}