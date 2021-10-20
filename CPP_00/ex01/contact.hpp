#ifndef CONTACT_H__
#define CONTACT_H__

#include <iostream>
#include <string>

class Contact {
    private:
        std::string _fname;
        std::string _lname;
        std::string _nname;
        std::string _phnum;
        std::string _secret;
    public:
        Contact();
        ~Contact();

        void    setFname(std::string str);
        std::string    getFname();
        void    setLname(std::string str);
        std::string    getLname();
        void    setNname(std::string str);
        std::string    getNname();
        void    setPhnum(std::string str);
        std::string    getPhnum();
        void    setSecret(std::string str);
        std::string    getSecret();       
};

#endif