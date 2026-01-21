#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

class Contact
{
	public:
	std::string	firstName = "";
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;

	std::string getSecret();
	void		setSecret(std::string str);

	private:
	std::string	darkestSecret;
};

class PhoneBook
{
	public:
		Contact ContactList[8];
		void	addContact();
		void	searchContact();
};

#endif