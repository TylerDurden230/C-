#include "Sed.hpp"

Sed::Sed()
{}

Sed::~Sed(){}

std::string Sed::repl(std::string str, std::string s1, std::string s2)
{
    s1 = s2;
    return str;
}

std::string Sed::read(std::string filename, bool *error)
{
    std::string content;
    *error = false;
    this->in.open(filename);
    if (!this->in) {
            std::cout << "File not created!" << std::endl;
            *error = true;
        }
        else {
            std::stringstream buffer;
            buffer << this->in.rdbuf();
            content = buffer.str();
            this->in.close(); 
    }
    return content;
}

void Sed::replace(std::string filename, std::string s1, std::string s2)
{
    std::string content;
    bool error;
    content = Sed::read(filename, &error);
    if (!error && !content.empty())
    {
        content = Sed::repl(content, s1, s2);
        std::cout << content << std::endl;
    }
}