#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

void newContact(std::string info[])
{
	std::cout<< BLUP"What's your name ?" BLU << std::endl;
	std::cin >> info[0];
	std::cout<< BLUP"What's your lastname ?" BLU << std::endl;
	std::cin >> info[1];
	std::cout<< BLUP"What's your nickname ?"BLU << std::endl;
	std::cin >> info[2];
	std::cout<< BLUP"What's your phone number ?"BLU << std::endl;
	std::cin >> info[3];
	std::cout<< BLUP"What's your darket secret ?" BLU << std::endl;
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

void clear_data(std::string data[])
{
	for (int i = 4; i >= 0 ; i--)
		data[i].clear();
}

int main(void)
{
	PhoneBook repertoire;
	std::string cmd;
	std::string data[5];

	while(cmd != "EXIT")
	{
		std::cout << CYN "ENTER YOUR COMMAND PLEASE : " GRN << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			newContact(data);
			repertoire.add_Contact(data_to_contact(data), data);
			clear_data(data);
		}
		else if (cmd == "SEARCH")
			repertoire.print_Book_Data();
		else if (cmd == "EXIT")
			exit (0);
		else
			std::cout << RED "Please, type a valid command !" NC << std::endl;
		cmd = "";
	}
	return (0);
}