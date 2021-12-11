#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "[" << PURPLE << "Dog" << RESET << "] Default Costructor" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "[" << PURPLE << "Dog" << RESET << "] Destructor" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << PURPLE << "Wouf" << RESET << std::endl;
}