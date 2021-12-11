#include "WrongAnimal.hpp"
#include "Animal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << CYAN << "WrongAnimal created" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << CYAN << "WrongAnimal destroyed" << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
    return "WrongAnimal Type: " + _type;
}

void WrongAnimal::makeSound() const
{
    std::cout << CYAN << "WrongAnimal: A WrongSound" << RESET << std::endl;
}