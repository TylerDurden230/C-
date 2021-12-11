#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "[" << GREEN << "Animal" << RESET << "] default Costructor" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &original)
{
    std::cout << "[" << GREEN << "Animal" << RESET << "] copy Costructor" << std::endl;
	*this = original;
}

Animal::~Animal()
{
   std::cout << "[" << GREEN << "Animal" << RESET << "] Destructor" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << GREEN << "..." << RESET << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

Animal	&Animal::operator = (const Animal &original){
    if (this != &original){
	    this->type = original.getType();
    }
	return *this;
}