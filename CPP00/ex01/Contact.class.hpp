#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class Contact
{
	//méthodes = fonctions ADD SEARCH EXIT
	public:
	Contact();
	~Contact();

	//attributs = variables membres
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickName;
	std::string m_phoneNumber;
	std::string m_darkestSecret;
};


#endif