#include "Phonebook.hpp"

void Phonebook::add_contact(Contact contact)
{
}

Phonebook::Phonebook()
{
	index = 0;
}
Phonebook::~Phonebook()
{	
}

Contact	Phonebook::get_contact()
{
	return (*contact);
}