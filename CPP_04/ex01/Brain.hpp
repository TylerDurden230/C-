#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string *ideas;

    public:
        Brain();
        ~Brain();
        Brain(const Brain &brain);
        Brain &operator=(const Brain &brain);
        std::string *getIdeas() const;
};


#endif