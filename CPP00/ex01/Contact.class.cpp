/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:49:14 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/11 13:47:31 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact()
{
	m_darkestSecret = "";
	m_phoneNumber = "";
	m_firstName = "";
	m_lastName = "";
	m_nickName = "";

	return ;
 }

Contact::~Contact()
{}

Contact Contact::get_Contact_info(void)
{
	Contact newContact;

	std::cout<< BLUP "What's your name ?" BLU << std::endl;
	std::getline(std::cin, newContact.m_firstName);
	std::cout<< BLUP"What's your lastname ?" BLU << std::endl;
	std::getline(std::cin, newContact.m_lastName);
	std::cout<< BLUP"What's your nickname ?"BLU << std::endl;
	std::getline(std::cin, newContact.m_nickName);
	std::cout<< BLUP"What's your phone number ?"BLU << std::endl;
	std::getline(std::cin, newContact.m_phoneNumber);
	std::cout<< BLUP"What's your darket secret ?" BLU << std::endl;	
	std::getline(std::cin, newContact.m_darkestSecret);
		
	return (newContact);
}

void Contact::print_Data(void)
{
	std::cout << GRN "Contact infos : " << std::endl;
	std::cout << "[FIRST NAME] = " << m_firstName << std::endl;
	std::cout << "[LAST NAME] = " << m_lastName << std::endl;
	std::cout << "[NICKNAME] = " << m_nickName << std::endl;
	std::cout << "[PHONENUMBER] = " << m_phoneNumber << std::endl;
	std::cout << RED"[DARKEST SECRET] = " << m_darkestSecret << std::endl;
}

std::string Contact::check_data_len(std::string data)
{
	if (data.size() > 10)
	{
		int i = 10;
		int j = 0;
		while(data[i++])
			j++;
		data.replace(9, j + 1, ".");
	}
	return (data);
}

void Contact::print_Data_Tab(int index)
{
	std::string str = "";
	std::cout << BLU "|";
	std::cout << std::setw(10) << index << "|";
	str = check_data_len(m_firstName);
	std::cout << std::setw(10) << str << "|";
	str = check_data_len(m_lastName);
	std::cout << std::setw(10) << str << "|";
	str = check_data_len(m_nickName);
	std::cout << std::setw(10) << str << "|" NC << std::endl;
}