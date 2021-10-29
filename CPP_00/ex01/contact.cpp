     #include "contact.hpp"

    Contact::Contact() : is_empty(true)
    {
    }

    Contact::~Contact()
    {}

    void    Contact::setFname(std::string str)
    {
        _fname = str;
    }

    std::string   Contact::getFname()
    {
        return _fname;
    }

    void    Contact::setLname(std::string str)
    {
        _lname = str;
    }

    std::string    Contact::getLname()
    {
        return _lname;
    }

    void    Contact::setNname(std::string str)
    {
        _nname = str;
    }

    std::string    Contact::getNname()
    {
        return _nname;
    }

    void    Contact::setPhnum(std::string str)
    {
        _phnum = str;
    }

    std::string    Contact::getPhnum()
    {
        return _phnum;
    }

    void    Contact::setSecret(std::string str)
    {
        _secret = str;
    }
     
    std::string    Contact::getSecret()
    {
        return _secret;
    }

    void    Contact::setIsEmpty(bool x)
    {
        is_empty = x;
    }
        
    bool    Contact::getIsEmpty(){
        return (is_empty);
    }   