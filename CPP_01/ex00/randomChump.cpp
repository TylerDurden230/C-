#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie zombie;
    zombie.setName(name);
    std::cout << name << " is a new Zombie on the Stack..." << std::endl;
    zombie.annouce();
}