#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << PURPLE << "Cat created" << RESET << std::endl;
}

Cat::~Cat()
{
    std::cout << PURPLE << "Cat destroyed" << RESET << std::endl;
}

void Cat::makeSound() const
{
    std::cout << PURPLE << "Cat: Meow" << RESET << std::endl;
}