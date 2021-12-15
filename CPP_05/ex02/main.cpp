#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat flo("Flavio", 1);
        Bureaucrat gio("Giordano", 23);
        PresidentialPardonForm a("104");
        RobotomyRequestForm b("Pensione");
        ShrubberyCreationForm c("sub");
    }
        catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "--------------------------" << std::endl;
    try
    {
        std::cout << "Culo" << std::endl;
    }
        catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

}