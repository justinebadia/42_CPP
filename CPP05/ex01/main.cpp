/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:03:32 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/03 11:45:17 by jbadia           ###   ########.fr       */
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
	Bureaucrat &Tod2(Tod);

	std::cout << std::endl;
	std::cout << Bob;
	std::cout << Dave;
	std::cout << Ted;
	std::cout << Tod;
	std::cout << std::endl;

	std::cout << " -------- EXCEPTIONS -------- \n";
	Form form("C23", 12, 340);
	Form form2("AA", 155, 3);
	
	std::cout << form;
	std::cout << form2;

	std::cout << Tod2;
	form.beSigned(Tod2);

	Bureaucrat Chonchon ("Chonchon", 153);
	std::cout << Chonchon;
	Bureaucrat Chonchette ("Chonchette", 0);
	std::cout << Chonchette;
	
	std::cout << std::endl;
	std::cout << " -------- DESTRUCTEURS -------- \n";

	return 0;
}