#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "[" << CYAN << this->type << RESET << "] has been created" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "[" << CYAN << this->type << RESET << "] has been destroyed" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << CYAN << "miao miao" << RESET << std::endl;
}