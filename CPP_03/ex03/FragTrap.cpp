#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _Hitpoints = 100;
    _Energy = 100;
    _Atk_dmg = 30;
    std::cout << "FragTrap " << _name << " has been created" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name <<  " has been destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << _name << " Says: Gimme five!" << std::endl;
}