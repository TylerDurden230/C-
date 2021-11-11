#include "Zombie.hpp"

int main(int ac, char **av)
{
    int n = (ac == 2) ? std::atoi(av[1]) : -1;
    
    if (n > 0)
    {
        Zombie *horde = zombieHorde(n, "Lello");
        delete[] horde;
    }
    else
        std::cout << "wrong arguments. Sceim on iu" << std::endl;
    return 0;
}