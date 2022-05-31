/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:28:55 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/31 10:47:55 by jbadia           ###   ########.fr       */
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

	conversion.convertData();
	conversion.print_Data();
}