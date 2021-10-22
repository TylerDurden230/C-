
#include "Phonebook.hpp"

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
			phonebook.add_contact(add_contact());
		else if (check == 2)
			search_contact();
	return (0);
}