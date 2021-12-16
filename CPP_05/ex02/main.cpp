#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

    std::cout << std::endl;
    Bureaucrat flo("Flavio", 1);
    Bureaucrat gio("Giordano", 44);
    std::cout << std::endl << CYAN  << "-- ShrubberyCreationForm --" << RESET << std::endl;

    try
    {
        ShrubberyCreationForm c("104");
        flo.executeForm(c);
        gio.executeForm(c);
    }
        catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << BLUE << "-- RobotomyRequestForm --" << RESET << std::endl;
    try
    {
        RobotomyRequestForm b("Pensione");
        flo.executeForm(b);
        gio.executeForm(b);
    }
        catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << YELLOW << "-- PresidentialPardonForm --" << RESET << std::endl;
    try
    {
        PresidentialPardonForm a("Grazia");
        flo.executeForm(a);
        gio.executeForm(a);
    }
        catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }       
        
}