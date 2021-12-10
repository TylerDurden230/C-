#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "[" << CYAN << this->type << RESET << "] has been created" << std::endl;
}

Cat::Cat(const Cat &original)
{
    std::cout << "[" << PURPLE << "Cat" << RESET << "] Copy Constructor" << std::endl;
	this->brain = new Brain(*original.brain);
    this->type = "Cat";
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "[" << CYAN << this->type << RESET << "] has been destroyed" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << CYAN << "miao miao" << RESET << std::endl;
}

Cat	&Cat::operator = (const Cat &original){
	this->type = original.getType();
	this->brain = original.brain;
	return *this;
}

 Brain &Cat::getBrain() const
 {
	 return *this->brain;
 }