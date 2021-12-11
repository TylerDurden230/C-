#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "[" << CYAN << "Cat" << RESET << "] Default Costructor" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "[" << CYAN << "Cat" << RESET << "] destructor" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << CYAN << "meow" << RESET << std::endl;
}