#include "PhoneBook.hpp"

std::string Contact::getSecret()				{	return (darkestSecret); };
void		Contact::setSecret(std::string str)	{	darkestSecret = str; 	};

void	PhoneBook::addContact()
{
	int i = 0;
	std::string	str;

	while (ContactList[i].firstName != "" && i < 8)
		i++;
	if (i == 8)
		i = 0;
	std::cout << "First Name:\n";
	std::cin >> ContactList[i].firstName;
	std::cout << "Last Name:\n";
	std::cin >> ContactList[i].lastName;
	std::cout << "Nickname:\n";
	std::cin >> ContactList[i].nickname;
	std::cout << "Phone Number:\n";
	std::cin >> ContactList[i].phoneNumber;
	std::cout << "Darkest Secret:\n";
	std::cin >> str;
	ContactList[i].setSecret(str);
}

void	printEach(std::string str)
{
	int j = 0;

	while (j < 10 - str.length() && str.length() < 10)
	{
		std::cout << " ";
		j++;
	}
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << str;
	std::cout << "|";
}

void	PhoneBook::searchContact()
{
	std::cout << " =========================================== \n";
	std::cout << "|              CONTACT BOOK                 |\n";
	std::cout << "|                                           |\n";

	int i = 0;
	while (ContactList[i].firstName != "" && i < 8)
	{
		std::cout << "|         " << i + 1 << "|";

		printEach(ContactList[i].firstName);
		printEach(ContactList[i].lastName);
		printEach(ContactList[i].nickname);

		std::cout << "\n";
		i++;
	}
	std::cout << " =========================================== \n";

	int index;
	std::cout << "CHOOSE AN ENTRY: ";
	if (std::cin >> index && index < 9 && index > 0 && ContactList[index - 1].firstName != "")
	{
		index--;
		std::cout << "FIRST NAME: " << ContactList[index].firstName << "\n";
		std::cout << "LAST NAME: " << ContactList[index].lastName << "\n";
		std::cout << "NICKNAME: " << ContactList[index].nickname << "\n";
		std::cout << "PHONE NUMBER: " << ContactList[index].phoneNumber << "\n";
		std::cout << "DARKEST SECRET: " << ContactList[index].getSecret() << "\n";
	}
	else
	{
		std::cin.clear();
		std::cin.ignore(1000,'\n');
		std::cout << "INVALID ENTRY, CONTACT DOESN'T EXIST\n";
	}
}

int main(void)
{
	std::string	command;
	PhoneBook	Book;

	while (1)
	{
		std::cout << "TYPE A COMMAND:\n";
		std::cin >> command;

		if (command == "EXIT")
		return (0);
		if (command == "ADD")
			Book.addContact();
		else if (command == "SEARCH")
			Book.searchContact();
	}
}
