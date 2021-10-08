#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define MAX_CONTACT 8

#include <iostream>
#include <string>

class Phonebook {
    private:
        std::string _fname;
        std::string _lname;
        std::string _nname;
        std::string _phnum;
        std::string _secret; 
    public:
        void    setFname();
        void    getFname();
        void    setLname();
        void    getLname();
        void    setNname();
        void    getNname();
        void    setPhnum();
        void    getPhnum();
        void    setSecret();
        void    getSecret();       
};

#endif