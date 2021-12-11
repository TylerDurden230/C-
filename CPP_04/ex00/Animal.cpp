#include "Animal.hpp"

Animal::Animal()
{
    std::cout << YELLOW << "Animal created" << RESET << std::endl;
}

Animal::~Animal()
{
    std::cout << YELLOW << "Animal destroyed" << RESET << std::endl;
}

std::string Animal::getType() const
{
    return "Animal Type: " + _type;
}

void Animal::makeSound() const
{
    std::cout << YELLOW << "Animal: ..." << RESET << std::endl;
}