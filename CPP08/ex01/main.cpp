/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:09 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/17 15:24:55 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main(void)
{
    try
    {
        Span sp(10);

        sp.addNumber(10);
        sp.addNumber(2);
		sp.addNumber(35);
		sp.addNumber(22);
		sp.addNumber(12);
		sp.addNumber(667);
		sp.addNumber(100);
        sp.addNumber(22);
		sp.addNumber(305);
		sp.addNumber(222);
		std::cout << CYN << sp.shortestSpan() << NC << std::endl;
		std::cout << CYN << sp.longestSpan() << NC << std::endl;
		std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
	try
	{
		Span sp = Span(5);
		std::vector<int> tab(5);
		srand((unsigned int)time(NULL));
		std::generate(tab.begin(), tab.end(), std::rand);
		sp.addNumber(tab.begin(), tab.end());
		std::cout << CYN << sp.shortestSpan() << NC << std::endl;
		std::cout << CYN << sp.longestSpan() << NC << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Span sp = Span(10000);
		std::vector<int> tab(10000);
		srand((unsigned int)time(NULL));
		std::generate(tab.begin(), tab.end(), std::rand);
		sp.addNumber(tab.begin(), tab.end());
		std::cout << CYN << sp.shortestSpan() << NC << std::endl;
		std::cout << CYN << sp.longestSpan() << NC << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << BLU << "Tentative de mettre un chiffre dans un span vide" NC << std::endl;
	try
	{
		Span sp;
		sp.addNumber(10);
		std::cout << CYN << sp.shortestSpan() << NC << std::endl;
		std::cout << CYN << sp.longestSpan() << NC << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << '\n';
	}

	std::cout << BLU << "Tentative de calculer la distance dans un span de 1" NC << std::endl;
	try
	{
		Span sp(1);

        sp.addNumber(10);
		std::cout << CYN << sp.shortestSpan() << NC << std::endl;
		std::cout << CYN << sp.longestSpan() << NC << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << NC << '\n';
	}
	
	std::cout << BLU << "Test avec le main du pdf" NC << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << CYN << sp.shortestSpan() << NC << std::endl;
		std::cout << CYN << sp.longestSpan() << NC << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << NC << '\n';
	}

}