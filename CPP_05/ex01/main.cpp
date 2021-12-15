#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form a("Subscription", 1, 133);
        std::cout << a << std::endl;
        Form b("Boh", 10, 133);
        std::cout << b << std::endl;
        Form c("Something", 151, 133);
        std::cout << c << std::endl;
    }
        catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "--------------------------" << std::endl;
    try
    {
        Bureaucrat a("Flavio", 1);
        Bureaucrat b("Giordano", 23);
        Form low("lowLevel", 150, 150);
        Form high("highLevel", 3, 3);
        std::cout << low << std::endl;
        a.signForm(low);
        std::cout << low << std::endl;
        b.signForm(high);
    }
        catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

}