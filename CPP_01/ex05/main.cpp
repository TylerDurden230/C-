#include  "Karen.hpp"

int main(int ac, char *argv[])
{
    Karen karen;
    if (ac == 2)
    {
        karen.complain(argv[1]);
    }
    else {
        std::cout << "Wrong arguments number. Shame on You!!!!" << std::endl;
    }
    return 0;
}