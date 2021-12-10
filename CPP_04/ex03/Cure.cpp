#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
}

Cure::~Cure(){}

AMateria* Cure::clone() const
{
    AMateria* _clone = new Cure();
    return _clone;
}

void Cure::use(ICharacter& target)
{
    std::cout << GREEN << "* heals " << target.getName() << "’s wounds *" << RESET << std::endl;
}