#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _Hitpoints = 100;
    _Energy = 50;
    _Atk_dmg = 20;
    std::cout << "ScavTrap " << _name << " has been created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name <<  " has been destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << _name <<  " has entered in Gate keeper mode" << std::endl;
}
