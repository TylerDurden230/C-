#include "WrongDog.hpp"

WrongDog::WrongDog()
{
    this->type = "WrongDog";
    std::cout << "[" << PURPLE << this->type << RESET << "] has been created" << std::endl;
}

WrongDog::~WrongDog()
{
    std::cout << "[" << PURPLE << this->type << RESET << "] has been destroyed" << std::endl;
}

void WrongDog::makeSound(void) const
{
    std::cout << PURPLE << "bau bau" << RESET << std::endl;
}