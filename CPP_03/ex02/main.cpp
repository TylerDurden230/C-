#include "FragTrap.hpp"

int main()
{

    FragTrap warrior1("Flavio");
    FragTrap warrior2("Giordano");

    warrior2.highFivesGuys();
    warrior1.attack("Giordano");
    warrior2.takeDamage(30);
}