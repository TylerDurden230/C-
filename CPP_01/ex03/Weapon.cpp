#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string type)
{
     setType(type);
}

Weapon::~Weapon()
{

}

std::string	&Weapon::getType()
{
    std::string &ref = _type;
    return ref;
}

void	Weapon::setType(std::string type)
{
    _type = type;
}

