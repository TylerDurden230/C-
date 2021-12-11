#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "[" << PURPLE << "Dog" << RESET << "] Default Costructor" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &original)
{
    std::cout << "[" << PURPLE << "Dog" << RESET << "] Copy Constructor" << std::endl;
	this->brain = new Brain(*original.brain);
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "[" << PURPLE << "Dog" << RESET << "] Destructor" << std::endl;
    delete this->brain;
}

void Dog::makeSound(void) const
{
    std::cout << PURPLE << "wouf" << RESET << std::endl;
}

Dog	&Dog::operator = (const Dog &original){
    if (this != &original){
        this->type = original.getType();
        this->brain = original.brain;
    }
	return *this;
}

 Brain &Dog::getBrain() const
 {
	 return *this->brain;
 }