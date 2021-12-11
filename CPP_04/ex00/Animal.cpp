#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "[" << GREEN << "Animal" << RESET << "] default Costructor" << std::endl;
    this->type = "Animal";
}

Animal::~Animal()
{
    std::cout << "[" << GREEN << "Animal" << RESET << "] Destructor" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << GREEN << "..." << RESET << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}