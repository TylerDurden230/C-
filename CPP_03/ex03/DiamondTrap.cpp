#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	ClapTrap::_Energy = ScavTrap::_Energy;
	_name = name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << CYAN << "[DiamondTrap] " << RESET << _name << " Destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << CYAN << "[DiamondTrap] " << RESET << "Name: " << _name <<  ", ClapTrapName: " << ClapTrap::_name << std::endl;
}