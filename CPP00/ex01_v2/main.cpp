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
			repertoire.add_Contact();
		else if (cmd == "SEARCH")
			repertoire.print_Book_Data();
		else if (cmd == "EXIT" || cmd.c_str() == NULL)
			exit (0);
		else
			std::cout << RED "Please, type a valid command !" NC << std::endl;
		cmd = "";
	}
	return (0);
}