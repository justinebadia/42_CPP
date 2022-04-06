#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"


void newContact(std::string info[])
{
	std::cout<< "What's your name ?" << std::endl;
	std::cin >> info[0];
	std::cout<< "What's your lastname ?" << std::endl;
	std::cin >> info[1];
	std::cout<< "What's your nickname ?" << std::endl;
	std::cin >> info[2];
	std::cout<< "What's your phone number ?" << std::endl;
	std::cin >> info[3];
	std::cout<< "What's your darket secret ?" << std::endl;
	std::cin >> info[4];
}

Contact	data_to_contact(std::string data[])
{
	Contact	newContact;

	newContact.m_firstName = data[0];
	newContact.m_lastName = data [1];
	newContact.m_nickName = data[2];
	newContact.m_phoneNumber = data[3];
	newContact.m_darkestSecret = data[4];

	return (newContact);
}

int main(void)
{
	PhoneBook repertoire;
	int		i = 0;
	std::string cmd;
	std::string data[5];

	std::cout << "Enter your command please : " << std::endl;
	std::cin >> cmd;

	if (cmd == "ADD")
	{
		newContact(data); // remettre data a null à chque fois ?
		repertoire.add_Contact(data_to_contact(data));
	}
	else if (cmd == "SEARCH")
	{
		std:: cout << "SEARCH" << std::endl;

	}
	else if (cmd == "EXIT")
	{
		std:: cout << "EXIT" << std::endl;
	}
	else
		std::cout << "Please, type a valid command !" << std::endl;
	std:: cout << repertoire.m_friend[0].m_firstName;
	return (0);
}