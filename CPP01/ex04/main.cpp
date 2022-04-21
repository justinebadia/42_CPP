/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:54:21 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/21 10:54:21 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <fstream>

#define RED "\e[0;31m"
#define NC "\e[0m"

int main (int argc, char **argv)
{
    std::string str;
	std::string str_replace;
	std::string s1;
	std::string s2;
    
    if (argc != 4)
	{
		std::cout << RED"./ex04 filename string1 string2" NC << std::endl;
        return (1);
	}
	str = argv[1];
	s1 = argv[2];
	s2 = argv[3];
    std::ifstream filename(str);
	str_replace = str + ".replace";
    std::ofstream filename_replace(str_replace, std::ios::app);
	str = "";
    if (!filename || !filename_replace || s1.empty() || s2.empty())
	{
		std::cout << RED "File error" NC << std::endl;
        return (1);
	}
    while (getline(filename, str))
    {
        for(unsigned int i = str.find(s1); str.find(s1) != std::string::npos; )
		{
				str.erase(i, s1.length());
				str.insert(i, s2);
				i = str.find(s1, i);
		}
        filename_replace << str;
		filename_replace << std::endl;
    }
    return (0);
}