#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _Hitpoints = 100;
    _Energy = 50;
    _Atk_dmg = 20;
    std::cout << PURPLE << "[ScavTrap] " << RESET << _name << " has been created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << PURPLE << "[ScavTrap] " << RESET << _name <<  " has been destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << PURPLE << "[ScavTrap] " << RESET << _name <<  " has entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << PURPLE << "[ScavTrap] " << RESET << _name << " attacks " << target << ", but in a different way causing " << _Atk_dmg << " points of damage!" << std::endl;
}
