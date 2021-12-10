#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "[" << CYAN << this->type << RESET << "] has been created" << std::endl;
}

Cat::~Cat()
{
    std::cout << "[" << CYAN << this->type << RESET << "] has been destroyed" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << CYAN << "miao miao" << RESET << std::endl;
}