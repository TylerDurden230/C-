#include "Brain.hpp"

Brain::Brain(const Brain &brain){
    std::cout << "Brain's Copy Costructor" << std::endl;
    this->ideas = new std::string[100];
    *this = brain;
}

Brain::Brain(){
    std::cout << "Brain's Default Costructor" << std::endl;
    this->ideas = new std::string[100];
}

Brain::~Brain(){
    std::cout << "Brain's Destructor" << std::endl;
    delete [] this->ideas;
}

Brain &Brain::operator=(const Brain &brain){
    if (this != &brain){
        for (int i = 0; i < 100; i++){
            this->ideas[i] = brain.ideas[i];
        }
    }
    return *this;
}

std::string *Brain::getIdeas() const
{
    return this->ideas;
}