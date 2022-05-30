/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:28:55 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/30 16:13:28 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED  "Wrong Usage ! Please -> ./convert [arg]" NC << std::endl;
		exit (1);
	}
	std::string str(argv[1]);
	if (str.empty())
	{
		std::cout << RED  "Empty string !" NC << std::endl;
		exit (1);
	}
	
	Convert conversion(argv[1]);
	conversion.print_Data();
	conversion.convertData();
	std::cout << "\naprès\n";
	conversion.print_Data();

}