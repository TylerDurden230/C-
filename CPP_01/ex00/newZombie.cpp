#include "Zombie.hpp"

Zombie* newZombie( std::string name)
{

    Zombie *zombie = new Zombie(name);
    std::cout << name << " is a new Zombie on the Heap..." << std::endl;  
    //zombie->setName(name);

    //return zombie;
    return zombie;
}