
#include "PhoneBook.class.hpp"


PhoneBook::PhoneBook() : count(0)
{}

PhoneBook::~PhoneBook()
{}

void PhoneBook::add_Contact(Contact newContact, std::string data[])
{
	int	i = 0;

	while (i < this->count)
		i++;
	if (this->count == 8)
	{
		m_friend[0] = newContact;
		this->count--;
	}
	else
		m_friend[i] = newContact;
	this->count++;
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
		data.replace(9, j, ".");
	}
	return (data);
}

void PhoneBook::print_Contact(int index)
{
	std::cout << "Contact infos : " << std::endl;
	std::cout << m_friend[index].m_firstName << std::endl;
	std::cout << m_friend[index].m_lastName << std::endl;
	std::cout << m_friend[index].m_nickName << std::endl;
	std::cout << m_friend[index].m_phoneNumber << std::endl;
	std::cout << m_friend[index].m_darkestSecret << std::endl;
}

void PhoneBook::print_Header_Tab(int index)
{
	
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|   INDEX  |FIRSTNAME | LASTNAME | NICKNAME |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}



void	PhoneBook::print_Book_Data(void)
{
	std::string cmd = "";
	int index;

	print_Header_Tab(index);
	for (index = 0; index < this->count; index++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << index << "|";
		m_friend[index].m_firstName = check_data_len(m_friend[index].m_firstName);
		std::cout << std::setw(10) << m_friend[index].m_firstName << "|";
		std::cout << std::setw(10) << m_friend[index].m_lastName << "|";
		std::cout << std::setw(10) << m_friend[index].m_nickName << "|" << std::endl;
		
	}
	do
	{
		std::getline(std::cin >> std::ws, cmd);
		index = atoi(cmd.c_str());
		if (index < 0 || index > this->count)
			std::cout << "Select an existing index PLEASE" << std::endl;
		else
			std::cout << "Select an index" << std::endl;
	} while (index < 0 || index > this->count);
	print_Contact(index);


}