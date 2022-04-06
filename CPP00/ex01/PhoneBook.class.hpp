#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include "Contact.class.hpp"

#define N_FRIEND 8

class PhoneBook
{
	public:
	PhoneBook();
	~PhoneBook();
	int	count;
	void	add_Contact(Contact newContact);
	Contact m_friend[N_FRIEND];
};

#endif