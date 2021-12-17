#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>
#include <sstream> 

class ShrubberyCreationForm : public Form
{
    private:
        const std::string _target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& rhs);
        ShrubberyCreationForm(const std::string &target);
        const   std::string getTarget() const;
        void    execute(Bureaucrat const & executor) const;
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& rhs);
};

#endif