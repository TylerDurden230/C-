#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MAX_CONTACT 8
#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"

#include <iostream>
#include <string>
#include "contact.hpp"

class Phonebook {
    private:
        Contact contact[MAX_CONTACT];
        int index;
    public:
        Phonebook();
        Contact get_contact();
        void add_contact(Contact contact, int *index);
        void search_contact();
        ~Phonebook();
};

int     check_input(std::string input);

#endif