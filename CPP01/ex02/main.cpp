/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:39:52 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/13 18:59:24 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define NC "\e[0m"

int main (void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF(str);

	std::cout << "L'adresse de la string str est " GRN << &str << std::endl;
	std::cout << NC "L'adresse stockée dans stringPTR est " GRN << stringPTR << NC " et l'adresse du pointeur est " GRN << &stringPTR << std::endl;
	std::cout << NC "L'adresse stockée dans stringREF est " GRN << &stringREF << std::endl<< std::endl;

	std::cout << NC "La valeur de la string str est " CYN << str << std::endl;
	std::cout << NC "La valeur pointée par stringPTR est " CYN << *stringPTR << std::endl;
	std::cout << NC "La valeur pointée par stringREF est " CYN << stringREF << std::endl;
	
	return (0);
}