#include "Phonebook.hpp"

void Phonebook::add_contact(Contact contact)
{
	std::string str;
	std::cout << "First Name: ";
	std::getline(std::cin, str);
	contact.setFname(str);
	std::cout << "Last Name: ";
	std::getline(std::cin, str);
	contact.setLname(str);
	std::cout << "Nickname: ";
	std::getline(std::cin, str);
	contact.setNname(str);
	std::cout << "Phone Number: ";
	std::getline(std::cin, str);
	contact.setPhnum(str);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, str);
	contact.setSecret(str);
	std::cout << "A new contact has been added!" << std::endl;
	if (index < 7)
		index++;
	else 
		index = 0;
}

Phonebook::Phonebook()
{
	index = 0;
}
Phonebook::~Phonebook()
{	
}

int		Phonebook::get_index()
{
	return (index);
}

Contact	Phonebook::get_contact(int index)
{
	return (contact[index]);
}

void    Phonebook::show_contact(Contact contact)
{
	std::cout << contact.getFname() << std::endl;
}
