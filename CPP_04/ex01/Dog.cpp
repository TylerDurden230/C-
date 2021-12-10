#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "[" << PURPLE << this->type << RESET << "] has been created" << std::endl;
}

Dog::Dog(const Dog &original)
{
    std::cout << "[" << PURPLE << "Dog" << RESET << "] Copy Constructor" << std::endl;
	this->brain = new Brain(*original.brain);
    this->type = "Dog";
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "[" << PURPLE << this->type << RESET << "] has been destroyed" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << PURPLE << "bau bau" << RESET << std::endl;
}

Dog	&Dog::operator = (const Dog &original){
	this->type = original.getType();
	this->brain = original.brain;
	return *this;
}

 Brain &Dog::getBrain() const
 {
	 return *this->brain;
 }