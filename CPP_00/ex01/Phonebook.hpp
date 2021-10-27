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
        void    add_contact();
        int     get_index();
        Contact get_contact(int index);
        void    show_contact(int i);
        ~Phonebook();
};

#endif