#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria &original)
{
    *this = original;
}

std::string const &AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    target.getName();
}

 AMateria &AMateria::operator=(const AMateria &original)
 {
    (void)original;
    return *this;
 }
