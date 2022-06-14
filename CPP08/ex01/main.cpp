/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:09 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/14 10:42:15 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>

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
		std::cout << BLU "shortest result = " << sp.shortestSpan() << NC << std::endl;
		std::cout << BLU "longest result = " << sp.longestSpan() << NC << std::endl;
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
		for (unsigned int i = 0; i < tab.size(); i++)
			std::cout << tab[i] << std::endl;
			//tab[i] = rand();
		// sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);
	//	sp.addNumber(tab.begin(), tab.end(), tab);
		// std::cout << sp.shortestSpan() << std::endl;
		// std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}