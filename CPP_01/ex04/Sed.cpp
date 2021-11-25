#include "Sed.hpp"

Sed::Sed()
{}

Sed::~Sed(){}

std::string Sed::repl(std::string str, std::string find, std::string replace, size_t from)
{
    std::size_t pos = str.find(find, from);
    if (pos == std::string::npos)
        return str;
    str.erase(pos, find.length());
    str.insert(pos,replace);
    return repl(str, find, replace, pos + replace.length());
}

std::string Sed::read(std::string filename, bool *error)
{
    std::string content;
    *error = false;
    this->in.open(filename);
    if (!this->in) {
        std::cout << "File not opened!" << std::endl;
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

void    Sed::write(std::string filename, std::string content, bool *error)
{
    *error = false;
    this->out.open(filename);
    if (!this->out) {
        std::cout << "File not created!" << std::endl;
        *error = true;
    }
    else {
        this->out << content;
        this->out.close();
    }
}

void Sed::replace(std::string filename, std::string s1, std::string s2)
{
    std::string content;
    bool error;
    content = Sed::read(filename, &error);
    if (!error)
    {
        content = Sed::repl(content, s1, s2, 0);
        Sed::write(filename.append(".replace"), content, &error);
    }
}