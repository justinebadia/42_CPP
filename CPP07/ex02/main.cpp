/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:20:15 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/07 10:18:56 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main (void)
{
	std::cout << CYN "INTEGER TEST\n---- TEST = Array de 10 INT ---- " NC << std::endl;
	{
		Array<int> test(10);
		for (unsigned int i = 0; i < test.size(); i++)
		{
			test[i] =  5 + i;
			std::cout << BLU << test[i] << NC << std::endl;
		}
		std::cout << CYN "---- Recopie de TEST dans TEST 1 ---- " NC << std::endl;
		Array<int> test1 = test;
		for (unsigned int i = 0; i < test1.size(); i++)
			std::cout << BLU << test1[i] << NC << std::endl;

		std::cout << CYN "---- OVERLOAD de TEST dans TEST 3 ---- " NC << std::endl;
		Array<int>test3;
		test3 = test1;
		for (unsigned int i = 0; i < test3.size(); i++)
			std::cout << BLU << test3[i] << NC << std::endl;
		
		std::cout << CYN "---- Modification des valeurs dans TEST ---- " NC << std::endl;
		for (unsigned int i = 0; i < test.size(); i++)
		{
			test[i] =  100;
			std::cout << BLU << test[i] << NC << std::endl;
		}
		std::cout << CYN "---- Les valeurs des autres array n'ont pas changé ---- "<< std::endl;
		std::cout << "TEST1      TEST3" << NC << std::endl;
		for (unsigned int i = 0; i < test3.size(); i++)
			std::cout << BLU << test1[i] << "           " << test3[i] << NC << std::endl;
	}

	std::cout << CYN "\nSTRING TEST\n---- TEST = Array de 4 STRING ---- " NC << std::endl;
	{
		Array <std::string> str(4);
		str[0] = "SALUT";
		str[1] = "AUREVOIR";
		str[2] = "bonjour";
		str[3] = "wesh";
		for(unsigned int i = 0; i < str.size(); i++)
			std::cout << BLU << str[i] << NC << std::endl;

		std::cout << CYN "---- Array vide ---- " NC << std::endl;
		Array<std::string> str1;
		for(unsigned int i = 0; i < str1.size(); i++)
			std::cout << BLU << str1[i] << NC << std::endl;
		std::cout << CYN "---- Overload de str dans str1 ---- " NC << std::endl;
		str1 = str;
		for(unsigned int i = 0; i < str1.size(); i++)
			std::cout << BLU << str1[i] << NC << std::endl;
		std::cout << CYN "---- Modification des valeurs dans str ---- " NC << std::endl;
		for(unsigned int i = 0; i < str.size(); i++)
		{
			str[i] = "Berk";
			std::cout << BLU << str[i] << NC << std::endl;
		}
		std::cout << CYN "---- Les valeurs de str1 n'ont pas changé ---- "<< std::endl;
		for(unsigned int i = 0; i < str1.size(); i++)
			std::cout << BLU << str1[i] << NC << std::endl;	
	}

	std::cout << CYN "---- TRY&CATCH ---- " NC << std::endl;
	{
		try
		{
			Array<std::string> str(2);
			std::cout << CYN "---- Init une valeur hors index ---- " NC << std::endl;
			str[12] = "salut";
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << '\n';
		}

		try
		{
			Array<std::string> str(2);
			for(unsigned int i = 0; i < str.size(); i++)
				str[i] = "Allo";
			std::cout << CYN "---- Lire une valeur hors index ---- " NC << std::endl;
			std::cout << str[4] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << '\n';
		}
	}
	return 0;
}