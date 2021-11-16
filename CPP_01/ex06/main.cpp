#include  "Karen.hpp"


bool filter(std::string level,std::string lvlStr)
{
    size_t pos , end;
    bool valid;

    valid = false;
    pos = lvlStr.find(level, 0);
    if (pos != std::string::npos)
    {
        end = pos + level.length();
        if (level.find(",", 0) == std::string::npos && (end == lvlStr.length()  || lvlStr.at(end) == ','))
            valid = true;
    }
    return valid;
}

int main(int ac, char *argv[])
{
    Karen karen;
    std::string lvlStr = "DEBUG,INFO,WARNING,ERROR";
    enum levels {
        DEBUG = 0,
        INFO = 6,
        WARNING = 11,
        ERROR = 19
    };
    size_t pos = -1;

    if (ac == 2)
    {
        std::string level(argv[1]);
        if (filter(level,lvlStr))
            pos = lvlStr.find(level, 0);
        switch (pos)
        {
            case DEBUG :
            case INFO :
            case WARNING :
            case ERROR :
                karen.complain(argv[1]);
            break;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
    }
    else {
        std::cout << "Wrong arguments number. Shame on You!!!!" << std::endl;
    }
    return 0;
}