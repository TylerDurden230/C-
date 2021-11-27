#include "ScavTrap.hpp"

int main()
{
    ScavTrap warrior1("Flavio");
    ScavTrap warrior2("Giordano");

    warrior2.guardGate();
    warrior1.attack("Giordano");
    warrior2.takeDamage(20);
}