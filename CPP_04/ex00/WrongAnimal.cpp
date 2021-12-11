#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "[" << GREEN << "WrongAnimal" << RESET << "] default Costructor" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[" << GREEN << "WrongAnimal" << RESET << "] Destructor" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << GREEN << "..." << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}