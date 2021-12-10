#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "[" << GREEN << this->type << RESET << "] has been created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[" << GREEN << this->type << RESET << "] has been destroyed" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << GREEN << "..." << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}