/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:31:25 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/11 13:43:34 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define REDB "\e[41m"
#define BLUP "\e[94m"
#define CYNP "\e[96m"
#define NC "\e[0m"

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	//méthodes = fonctions 
	public:
	Contact();
	~Contact();

	Contact	get_Contact_info(void);
	void print_Data(void);
	void print_Data_Tab(int index);
	
	//attributs = variables membres
	private:
	std::string check_data_len(std::string data);
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickName;
	std::string m_phoneNumber;
	std::string m_darkestSecret;
};

#endif