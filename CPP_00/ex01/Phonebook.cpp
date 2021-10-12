#include "Phonebook.hpp"

void    add_contact(Phonebook *contact, int *index)
{
	if(*index >= MAX_CONTACT)
	{
		
	}
	else
	{
		contact[*index].add_contact();
		*index += 1;
	}
}

int check_input(Phonebook *contact, int *index, std::string input)
{
	std::string add = "ADD";
	std::string search = "SEARCH";
	std::string exit = "EXIT";

	if (add.compare(input))
		add_contact(contact, index);

	return 0;
}

int main() 
{
	Phonebook contact[MAX_CONTACT];
	int index;
	int check;
	std::string input;

	std::getline(std::cin, input);
	check_input(contact, &index, input);
	std::cout << input << std::endl;

	return (0);
}