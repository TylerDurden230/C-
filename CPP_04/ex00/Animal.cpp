#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "[" << GREEN << this->type << RESET << "] has been created" << std::endl;
}

Animal::~Animal()
{
    std::cout << "[" << GREEN << this->type << RESET << "] has been destroyed" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << GREEN << "..." << RESET << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}