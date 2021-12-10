#include "Brain.hpp"

Brain::Brain(const Brain &brain){
    this->ideas = new std::string[100];
    *this = brain;
}

Brain::Brain(){
    this->ideas = new std::string[100];
}

Brain::~Brain(){
    delete [] this->ideas;
}

Brain &Brain::operator=(const Brain &brain){
    for (int i = 0; i < 100; i++){
        this->ideas[i] = brain.ideas[i];
    }
    return *this;
}

std::string *Brain::getIdeas() const
{
    return this->ideas;
}