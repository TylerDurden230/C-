#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "[" << CYAN << "WrongCat" << RESET << "] Default Costructor" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "[" << CYAN << "WrongCat" << RESET << "] destructor" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << CYAN << "miao miao" << RESET << std::endl;
}