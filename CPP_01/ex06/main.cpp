#include  "Karen.hpp"

int main(int ac, char *argv[])
{
    Karen karen;
    std::string lvlArr  [] = {"DEBUG","INFO","WARNING","ERROR"};
    if (ac == 2)
    {
        std::string level(argv[1]);
        for(int i = 0; i < 4; i++)
        {
            if (level == lvlArr[i])
            {
                switch (i)
                {
                    case 0 :
                        std::cout << "[ DEBUG ]" << std::endl;
                         karen.complain("DEBUG");
                    case 1 :
                        std::cout << "[ INFO ]" << std::endl;
                         karen.complain("INFO");
                    case 2 :
                        std::cout << "[ WARNING ]" << std::endl;
                         karen.complain("WARNING");
                    case 3 :
                        std::cout << "[ ERROR ]" << std::endl;
                         karen.complain("ERROR");
                    break;
                }
                return 0;
            }
        }
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    else {
        std::cout << "Wrong arguments number. Shame on You!!!!" << std::endl;
    }
    return 0;
}