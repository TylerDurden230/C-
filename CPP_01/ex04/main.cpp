#include  "Sed.hpp"

int main(int ac, char **argv)
{
    Sed sed;
    if (ac == 4)
    {
        sed.replace(argv[1],argv[2],argv[3]);
    }
    else {
        std::cout << "Wrong arguments number. Shame on You!!!!" << std::endl;
        std::cout << "./replace [filename] [find] [replace]" << std::endl;
    }
}