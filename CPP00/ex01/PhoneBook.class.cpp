
#include "PhoneBook.class.hpp"


PhoneBook::PhoneBook()
{
	this->count = 0;
	std::cout << "count = "<< std::endl;
	std::cout << count << std::endl;
}

PhoneBook::~PhoneBook()
{}

void PhoneBook::add_Contact(Contact newContact)
{
	int	i = 0;

	while (i < this->count)
		i++;
	//if (this->count == 8)
	m_friend[i] = newContact;
	return ;
}