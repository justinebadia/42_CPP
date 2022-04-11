/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:01:25 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/11 10:09:32 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (int argc, char **argv)
{
	std::string str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	int i = 1;
	while (argv[i])
	{
		str = argv[i];
		for (unsigned int j = 0 ; j < str.size() ; j++)
			str[j] = std::toupper(str[j]);
		std::cout << str;
		if (argv[i + 1] != NULL)
			std::cout << " ";
		i++;	
	}
	std::cout << std::endl;
	return (0);
}