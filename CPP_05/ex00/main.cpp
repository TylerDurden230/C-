#include "Bureaucrat.hpp"

int main()
{
    try 
    {
        Bureaucrat a("Flavio", 1);
        Bureaucrat b("Giordano", 150);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        Bureaucrat c("Pino", 155);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat a("Lello", 2);
        Bureaucrat b("Lillo", 150);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        a.decrement();
        std::cout << a << std::endl;
        b.decrement();
        std::cout << b << std::endl;
    }
        catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}