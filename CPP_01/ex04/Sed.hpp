#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <sstream> 

class Sed{
    private:
        std::ifstream in;
        std::ofstream out;
        std::string repl(std::string str, std::string find, std::string replace, size_t pos);
        std::string read(std::string filename, bool *error);
        void write(std::string filename, std::string content, bool *error);
    public:
        Sed();
        ~Sed();
        void    replace(std::string filename, std::string s1, std::string s2);
};



#endif