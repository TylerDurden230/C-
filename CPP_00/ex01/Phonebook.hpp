#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define MAX_CONTACT 8

#include <iostream>
#include <string>
#include "contact.hpp"

class Phonebook {
    private:
        Contact contact[MAX_CONTACT];
    public:
        Phonebook();
        ~Phonebook();
    void add_contact();
    void search_contact();
};

#endif