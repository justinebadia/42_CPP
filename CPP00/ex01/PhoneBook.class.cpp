
#include "PhoneBook.class.hpp"
#include <cstdlib>

PhoneBook::PhoneBook() : count(0)
{}

PhoneBook::~PhoneBook()
{}

void PhoneBook::add_Contact(Contact newContact, std::string data[])
{
	int	i = 0;
	Contact tmp;

	while (i < count)
		i++;
	if (count == 8)
	{
		for (int j = 0; j < 8; j++)
		{
			m_friend[j] = m_friend[j + 1];
		}
		m_friend[7] = newContact;
		count--;
	}
	m_friend[i] = newContact;
	count++;
	return ;
}

std::string PhoneBook::check_data_len(std::string data)
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

void PhoneBook::print_Contact(int index)
{
	std::cout << GRN "Contact infos : " << std::endl;
	std::cout << "[FIRST NAME] = " << m_friend[index].m_firstName << std::endl;
	std::cout << "[LAST NAME] = " << m_friend[index].m_lastName << std::endl;
	std::cout << "[NICKNAME] = " << m_friend[index].m_nickName << std::endl;
	std::cout << "[PHONENUMBER] = " << m_friend[index].m_phoneNumber << std::endl;
	std::cout << RED"[DARKEST SECRET] = " << m_friend[index].m_darkestSecret << std::endl;
}

void PhoneBook::print_Header_Tab(void)
{
	
	std::cout << BLU "_____________________________________________" << std::endl;
	std::cout << "|   INDEX  |FIRSTNAME | LASTNAME | NICKNAME |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" NC << std::endl;
}

bool PhoneBook::check_Index(std::string cmd, int *index)
{
	int i = 0;
	*index = atoi(cmd.c_str());
	for(i = 0; i < cmd.size(); i++)
		if (isalpha(cmd[i]))
				return (false);
	if (i > 1)
		return (false);
		
	if (*index < 0 || *index > count)
		return (false);
	return (true);
}

void PhoneBook::print_Data_Tab(int index)
{
	std::string str = "";

	std::cout << BLU "|";
	std::cout << std::setw(10) << index << "|";
	str = check_data_len(m_friend[index].m_firstName);
	std::cout << std::setw(10) << str << "|";
	str = check_data_len(m_friend[index].m_lastName);
	std::cout << std::setw(10) << str << "|";
	str = check_data_len(m_friend[index].m_nickName);
	std::cout << std::setw(10) << str << "|" NC << std::endl<< std::endl;
}

void	PhoneBook::print_Book_Data(void)
{
	std::string cmd = "";
	std::string str = "";
	int index;

	print_Header_Tab();
	for (index = 0; index < count; index++)
		print_Data_Tab(index);
	if (count == 0)
	{
		std::cout << CYN "You don't have any friends... yet!" NC << std::endl << std::endl;
		return ;
	}
	std::cout << CYN "SELECT AN INDEX" NC << std::endl;
	do
	{
		std::getline(std::cin >> std::ws, cmd);
		std::cout << RED "SELECT AN EXISTING INDEX PLEASE" NC << std::endl;
	}
	while (!check_Index(cmd, &index));
	print_Contact(index);
}