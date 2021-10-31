#include "Phonebook.hpp"

void	start()
{
	std::cout << "Hi, this is your CRAPPY AWESOME PHONEBOOK." << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	std::cout << std::endl;
}	

int	check_input(std::string input)
{
	if (input == ADD)
		return (1);
	else if (input == SEARCH)
		return (2);
	else if (input == EXIT)
		return (0);
	else
		return (-1);
}

bool	check_index(const char *index)
{
	int i = 0;
	if (index[i] < 48 || index[i] > 57)
		return false;
	else
	{
		i = std::atoi(index);
		if (i >= 0 && i <= 7) 
			return true;
		else
			return false;
	}
}

bool	check_contact2(Phonebook phonebook, int i)
{
	if (!phonebook.check_contact2(phonebook.get_contact(i)))
		return true;
	else
		return false;
}

int main() 
{
	Phonebook phonebook;
	int check = 1;
	std::string input; // command input
	std::string input_index;
	int i; // converted index from string to int
	
	start();
	while(check != 0)
	{
		std::cout << "Command: ";
		std::getline(std::cin, input);
		check = check_input(input);
		if (check == 1)
		{
			phonebook.add_contact();
			phonebook.setIsEmpty();
		}
		else if (check == 2)
		{
			while (1)
			{
				phonebook.show_contacts();
				if (phonebook.getIsEmpty())
				{	
					std::cout << "You know, you should probably add a contact before looking for it..." << std::endl << std::endl;
					break;
				}
				std::cout << "Type the index of the desired contact: ";
				std::getline(std::cin, input_index);
				if (check_index(input_index.c_str()))
				{
					i = std::atoi(input_index.c_str());	
					if (i >= 0 || i <= 7)
					{
						if (check_contact2(phonebook, i))
						{
							phonebook.show_full_contact(i);
							break;
						}
						else
							std::cout << "This contact is empty!" << std::endl << std::endl;
					}
				}
				else
					std::cout << "Invalid index, try again." << std::endl << std::endl;
			}
		}
		else if (check == -1)
			std::cout << "Invalid Command. Type ADD, SEARCH or EXIT" << std::endl << std::endl;
	}
	return (0);
}