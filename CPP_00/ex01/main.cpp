#include "Phonebook.hpp"

char ft_toupper(char c)
{
	return ((c >= 97 && c <= 122) ? c - 32 : c);
}

void	start()
{
	std::cout << "Hi, this is your Phonebook." << std::endl;
	std::cout << "You have 3 different options" << std::endl;
	std::cout << "ADD: to add a new contact" << std::endl;
	std::cout << "SEARCH: to search a contact" << std::endl;
	std::cout << "EXIT: to exit this program" << std::endl;
	std::cout << std::endl;
}	

int	check_input(std::string input)
{
	if (input == ADD || input == "add")
		return (1);
	else if (input == SEARCH || input == "search")
		return (2);
	else if (input == EXIT || input == "exit")
		return (0);
	else
		return (-1);
}

int main() 
{
	Phonebook phonebook;
	int check = 1;
	std::string input; // questo è l'input del comando
	std::string input_index; // questo è l'index fornito dall'utente tramite input per la ricerca del contatto
	int i; // index convertito da stringa in intero
	
	start();
	while(check != 0)
	{
		std::cout << "Check: " << check << std::endl;
		std::cout << "Command: ";
		std::getline(std::cin, input);
		check = check_input(input);
		if (check == 1)
			phonebook.add_contact();
		else if (check == 2)
		{
			std::cout << "get i: ";
			std::getline(std::cin, input_index);
			i = std::atoi(input_index.c_str());
			phonebook.show_contact(i);
		}
		else if (check == -1)
			std::cout << "Error: Invalid Command" << std::endl;
	}
	std::cout << "index: " << phonebook.get_index() << std::endl;
	return (0);
}