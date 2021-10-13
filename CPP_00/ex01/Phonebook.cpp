#include "Phonebook.hpp"

void	add_contact(Contact *contact, int *index)
{

}

int check_input(std::string input)
{
	std::string add = ADD;
	std::string search = SEARCH;
	std::string exit = EXIT;

	if (input == ADD)
		add_contact;
	else if (input == SEARCH)
		add_contact;

	return 0;
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

	while(check != 0)
	{
		std::getline(std::cin, input);
		check_input(input);

		std::cout << input << std::endl;
	}
	return (0);
}