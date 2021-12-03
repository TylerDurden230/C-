#include "DiamondTrap.hpp"

int main()
{

    DiamondTrap warrior1("Giordano");
    DiamondTrap warrior2("Flavio");

    warrior1.whoAmI();
    warrior2.whoAmI();

    warrior2.highFivesGuys();
    warrior1.attack("Flavio");
    warrior2.takeDamage(30);
    warrior1.guardGate();
    warrior2.beRepaired(20);
}