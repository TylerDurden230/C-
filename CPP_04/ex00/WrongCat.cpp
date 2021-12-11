#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << RED << "WrongCat created" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << RED << "WrongCat destroyed" << RESET << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << PURPLE << "WrongCat: Meow" << RESET << std::endl;
}