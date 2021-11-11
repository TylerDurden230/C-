#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name)
{
    setName(name);
}

Zombie::~Zombie()
{
    std::cout << _name << " is dead...again" << std::endl;
}

std::string Zombie::getName()
{
    return(_name);
}

void Zombie::setName(std::string name)
{
    _name = name;
}

void    Zombie::annouce(void)
{
    std::cout << "<" << _name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
