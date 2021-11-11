#include "Zombie.hpp"

int main (int ac, char** av)
{
    int size = ac / 2;
    Zombie *newzombie[size];
    std::string name;
    for(int i = 1, j = 0; i < ac; i++)
    {
        if (i % 2)
            newzombie[j++] = newZombie(av[i]);
        else
            randomChump(av[i]);
    }
    for(int i = 0; i < size; i++)
        delete newzombie[i];
}