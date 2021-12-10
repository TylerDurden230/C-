#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Bau" << std::endl;
}