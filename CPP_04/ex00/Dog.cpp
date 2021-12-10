#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "[" << PURPLE << this->type << RESET << "] has been created" << std::endl;
}

Dog::~Dog()
{
    std::cout << "[" << PURPLE << this->type << RESET << "] has been destroyed" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << PURPLE << "bau bau" << RESET << std::endl;
}