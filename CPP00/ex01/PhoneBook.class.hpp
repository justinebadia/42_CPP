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
	void	add_Contact(Contact newContact, std::string data[]);
	void	print_Book_Data(void);

	private:
	int	count;
	Contact m_friend[N_FRIEND];
	void print_Contact(int index);
	void print_Header_Tab(int index);
	std::string check_data_len(std::string data);
};

#endif