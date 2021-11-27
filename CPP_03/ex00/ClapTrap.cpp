#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) 
{
    _name = name;
    _Hitpoints = 10;
    _Energy = 10;
    _Atk_dmg = 0;
    std::cout << _name << " Has been created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << _name << " Has been destroyed" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << _name << " attacks " << target <<  ", causing " << _Atk_dmg << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " <<  _name << " takes " << amount << " damage " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " <<  _name << " recovers " << amount << " hit points." << std::endl;
}
