#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << GREEN << "Dog created" << RESET << std::endl;
}

Dog::~Dog()
{
    std::cout << GREEN << "Dog destroyed" << RESET << std::endl;
}

void Dog::makeSound() const
{
    std::cout << GREEN << "Dog: Bau" << RESET << std::endl;
}