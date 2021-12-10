#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
}

Ice::~Ice(){}

AMateria* Ice::clone() const
{
    AMateria* _clone = new Ice();
    return _clone;
}

void Ice::use(ICharacter& target)
{
    std::cout << BLUE << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}