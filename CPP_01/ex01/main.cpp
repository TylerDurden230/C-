#include "Zombie.hpp"

int main(int ac, char **av)
{
    int n = (ac == 2) ? std::atoi(av[1]) : -1;
    
    if (n > 0)
    {
        Zombie *horde = zombieHorde(n, "Lello");
        for (int i = 0; i < n; i++)
            horde[i].annouce();
        delete[] horde;
    }
    else
        std::cout << "wrong arguments. Sceim on iu" << std::endl;
    return 0;
}