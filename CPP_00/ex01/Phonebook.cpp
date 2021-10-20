#include "Phonebook.hpp"

void	add_contact(Contact *contact, int *index)
{
	std::cout << "New contact" << std::endl;
}

void	search_contact()
{
	std::cout << "Search contact" << std::endl;
}

int check_input(std::string input)
{
	std::string add = ADD;
	std::string search = SEARCH;
	std::string exit = EXIT;

	if (input == ADD)
		return 1;
	else if (input == SEARCH)
		return 2;
	else if (input == EXIT)
		return 0;
	else
		std::cout << "Invalid input" << std::endl;
		return -1;
}

Phonebook::Phonebook()
{
}
Phonebook::~Phonebook()
{	
}

Contact	Phonebook::get_contact()
{
	return (*contact);
}

int main() 
{
	Phonebook phonebook;
	int check;
	std::string input;

	std::cout << "Hi, this is your Phonebook." << std::endl;
	std::cout << "You have 3 different options" << std::endl;
	check = 1;
	while(check != 0)
	{
		std::getline(std::cin, input);
		check = check_input(input);
		if (check == 1)
			Phonebook::add_contact()
		else if (check == 2)
			search_contact();
	return (0);
}