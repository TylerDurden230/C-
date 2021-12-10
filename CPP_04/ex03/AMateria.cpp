#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

std::string const &AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    target.getName();
}
