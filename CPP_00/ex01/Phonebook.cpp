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
	std::cout << "A new contact has been added!" << std::endl;
	contact[index].setIsEmpty(false);
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

int		Phonebook::check_contacts() // deve controllare quanti contatti esitono
{
	int i = 0;
	std::string check = contact[i].getFname();
	if (!check.empty())
	{
		
	}
	return (i);
}

void	Phonebook::show_contacts() // mostra i contatti esistenti, formattatti nel modo corretto
{
	std::cout << "|     index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!contact[i].getIsEmpty())
		{
			std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << contact[i].getFname().substr(0, 9).append(".") << "|"
			<< std::setw(10) << contact[i].getLname().substr(0, 9).append(".") << "|" << std::setw(10) << contact[i].getNname().substr(0, 9).append(".") << "|" << std::endl; 
		}
	}
}

void    Phonebook::show_full_contact(int i)
{
	std::cout << "First Name: " << contact[i].getFname() << std::endl;
	std::cout << "Last Name: " << contact[i].getLname() << std::endl;
	std::cout << "Nickname: " << contact[i].getNname() << std::endl;
	std::cout << "Phone Number: " << contact[i].getPhnum() << std::endl;
	std::cout << "Darkest Secret: " << contact[i].getSecret() << std::endl;
}
