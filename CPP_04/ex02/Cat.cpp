#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "[" << CYAN << "Cat" << RESET << "] Default Costructor" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &original)
{
    std::cout << "[" << CYAN << "Cat" << RESET << "] Copy Constructor" << std::endl;
	this->brain = new Brain(*original.brain);
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "[" << CYAN << "Cat" << RESET << "] destructor" << std::endl;
    delete this->brain;
}

void Cat::makeSound(void) const
{
    std::cout << CYAN << "meow" << RESET << std::endl;
}

Cat	&Cat::operator = (const Cat &original){
    if (this != &original){
        this->type = original.getType();
        this->brain = original.brain;
    }
    return *this;
}

 Brain &Cat::getBrain() const
 {
	 return *this->brain;
 }