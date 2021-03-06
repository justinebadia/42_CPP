/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:49:59 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/11 13:50:49 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook() : count(0)
{}

PhoneBook::~PhoneBook()
{}

void PhoneBook::add_Contact(void)
{
	unsigned int	i = 0;
	Contact 		tmp;

	tmp = tmp.get_Contact_info();
	while (i < count)
		i++;
	if (count == 8)
	{
		for (int j = 0; j < 8; j++)
		{
			m_friend[j] = m_friend[j + 1];
		}
		m_friend[7] = tmp;
		count--;
	}
	m_friend[i] = tmp;
	count++;
	return ;
}

void PhoneBook::print_Header_Tab(void)
{
	
	std::cout << BLU "_____________________________________________" << std::endl;
	std::cout << "|   INDEX  |FIRSTNAME | LASTNAME | NICKNAME |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" NC << std::endl;
}

bool PhoneBook::check_Index(std::string cmd, unsigned int *index)
{
	unsigned int i = 0;
	*index = atoi(cmd.c_str());
	for(i = 0; i < cmd.size(); i++)
		if (!isdigit(cmd[i]))
				return (false);
	if (i > 1)
		return (false);
	if (*index < 0 || *index > count - 1)
		return (false);
	return (true);
}

void	PhoneBook::print_Book_Data(void)
{
	std::string cmd = "";
	std::string str = "";
	unsigned int index;

	print_Header_Tab();
	for (index = 0; index < count; index++)
		m_friend[index].print_Data_Tab(index);
	if (count == 0)
	{
		std::cout << CYN "You don't have any friends... yet!" NC << std::endl << std::endl;
		return ;
	}
	std::cout << CYN "SELECT AN INDEX" NC << std::endl;
	do
	{
		std::getline(std::cin >> std::ws, cmd);
		std::cout << RED "SELECT AN EXISTING INDEX PLEASE" NC << std::endl;
	}
	while (!check_Index(cmd, &index));
	m_friend[index].print_Data();
}