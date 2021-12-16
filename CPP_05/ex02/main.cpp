#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << std::endl << "-- ShrubberyCreationForm --" << std::endl;

    try
    {
        Bureaucrat flo("Flavio", 1);
        Bureaucrat gio("Giordano", 150);
        ShrubberyCreationForm c("104");
        flo.executeForm(c);
    }
        catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "-- RobotomyRequestForm --" << std::endl;
    try
    {
        Bureaucrat flo("Flavio", 1);
        Bureaucrat gio("Giordano", 150);
        RobotomyRequestForm b("Pensione");
        flo.executeForm(b);
    }
        catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "-- PresidentialPardonForm --" << std::endl;
    try
    {
        Bureaucrat flo("Flavio", 1);
        Bureaucrat gio("Giordano", 150);
        PresidentialPardonForm a("Grazia");
        flo.executeForm(a);
    }
        catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }       
        
}