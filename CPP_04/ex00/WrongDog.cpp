#include "WrongDog.hpp"

WrongDog::WrongDog()
{
    std::cout << "[" << PURPLE << "WrongDog" << RESET << "] Default Costructor" << std::endl;
    this->type = "WrongDog";
}

WrongDog::~WrongDog()
{
    std::cout << "[" << PURPLE << "WrongDog" << RESET << "] Destructor" << std::endl;
}

void WrongDog::makeSound(void) const
{
    std::cout << PURPLE << "bau bau" << RESET << std::endl;
}