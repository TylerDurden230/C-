#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _Hitpoints = 100;
    _Energy = 100;
    _Atk_dmg = 30;
    std::cout << YELLOW << "[FragTrap] " << RESET << _name << " has been created" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << YELLOW << "[FragTrap] " << RESET << _name <<  " has been destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << YELLOW <<  "[FragTrap] " << RESET << _name << " Says: Gimme five!" << std::endl;
}