/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:49:43 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/11 13:34:59 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"


int main(void)
{
	PhoneBook repertoire;
	std::string cmd;
	std::string data[5];

	while(cmd != "EXIT")
	{
		std::cout << CYN "ENTER YOUR COMMAND PLEASE : " GRN << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			repertoire.add_Contact();
		else if (cmd == "SEARCH")
			repertoire.print_Book_Data();
		else if (cmd == "EXIT" || cmd.c_str() == NULL)
			exit (0);
		else
			std::cout << RED "Please, type a valid command !" NC << std::endl;
		cmd = "";
	}
	return (0);
}