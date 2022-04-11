/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:32:29 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/11 10:07:02 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

#define N_FRIEND 8

class PhoneBook
{
	public:
	PhoneBook();
	~PhoneBook();
	void	add_Contact(void);
	void	print_Book_Data(void);

	private:
	unsigned int	count;
	Contact m_friend[N_FRIEND];
	void print_Header_Tab(void);
	std::string check_data_len(std::string data);
	bool check_Index(std::string cmd, unsigned int *index);
};

#endif