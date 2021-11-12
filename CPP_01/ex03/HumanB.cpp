#include "HumanB.hpp"

HumanB::HumanB()
{}

HumanB::HumanB(std::string name)
{
    this->_name = name;
    _weapon = NULL;
}

HumanB::~HumanB()
{

}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack()
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}