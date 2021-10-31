#include "Phonebook.hpp"

void Phonebook::add_contact()
{
	std::string str;
	std::cout << "First Name: ";
	std::getline(std::cin, str);
	contact[index].setFname(str);
	std::cout << "Last Name: ";
	std::getline(std::cin, str);
	contact[index].setLname(str);
	std::cout << "Nickname: ";
	std::getline(std::cin, str);
	contact[index].setNname(str);
	std::cout << "Phone Number: ";
	std::getline(std::cin, str);
	contact[index].setPhnum(str);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, str);
	contact[index].setSecret(str);
	std::cout << "A new contact has been added!" << std::endl << std::endl;
	contact[index].setIsEmpty(false);
	if (index < 7)
		index++;
	else 
		index = 0;
}

Phonebook::Phonebook()
{
	index = 0;
	empty = true;
}
Phonebook::~Phonebook()
{	
}

void	Phonebook::setIsEmpty()
{
	empty = false;
}

bool	Phonebook::getIsEmpty()
{
	return (empty);
}

int		Phonebook::get_index()
{
	return (index);
}

Contact	Phonebook::get_contact(int i)
{
	return (contact[i]);
}

int		Phonebook::check_contact(std::string str) // deve controllare quanti contatti esitono
{
	if (str.empty())
		return 1;
	else
		return 0;
}

bool		Phonebook::check_contact2(Contact contact) // deve controllare se la variabile bool isempty è true o false
{
	if (contact.getIsEmpty())
		return true;
	else
		return false;
}

void	Phonebook::show_contacts() // mostra i contatti esistenti, formattatti nel modo corretto
{
	std::cout << std::endl;
	std::cout << "|     index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (!contact[i].getIsEmpty())
		{
			std::cout << "|" << std::setw(10) << i << "|";
			if (!check_contact(contact[i].getFname()) && contact[i].getFname().length() > 10)
				std::cout << std::setw(10) << contact[i].getFname().substr(0, 9).append(".") << "|";
			else
				std::cout << std::setw(10) << contact[i].getFname() << "|";

			if (!check_contact(contact[i].getLname()) && contact[i].getLname().length() > 10)
				std::cout << std::setw(10) << contact[i].getLname().substr(0, 9).append(".") << "|";
			else
				std::cout << std::setw(10) << contact[i].getLname() << "|";

			if (!check_contact(contact[i].getNname()) && contact[i].getNname().length() > 10)
				std::cout << std::setw(10) << contact[i].getNname().substr(0, 9).append(".") << "|" << std::endl;
			else
				std::cout << std::setw(10) << contact[i].getNname() << "|" << std::endl; 
		}
	}
	std::cout << std::endl;
}

void    Phonebook::show_full_contact(int i)
{
	{
		std::cout << "First Name: " << contact[i].getFname() << std::endl;
		std::cout << "Last Name: " << contact[i].getLname() << std::endl;
		std::cout << "Nickname: " << contact[i].getNname() << std::endl;
		std::cout << "Phone Number: " << contact[i].getPhnum() << std::endl;
		std::cout << "Darkest Secret: " << contact[i].getSecret() << std::endl << std::endl;
	}
}
