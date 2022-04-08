#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

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
	void print_Header_Tab(void);
	void print_Data_Tab(int index);
	std::string check_data_len(std::string data);
	bool check_Index(std::string cmd, int *index);
};

#endif