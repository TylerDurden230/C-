#include "Form.hpp"

Form::Form() : _name("None"), _signed(false), _reqGradeToSign (1), _reqGradeToExec(1)
{
    std::cout << "Default's Construcrtor Called" << std::endl;
}

Form::~Form()
{
    std::cout << "Destrucrtor Called" << std::endl;
}

Form::Form(const Form& rhs) : _name(rhs._name), _signed(rhs._signed), _reqGradeToSign(rhs._reqGradeToSign), _reqGradeToExec(rhs._reqGradeToExec) 
{
    std::cout << "Copy Construcrtor Called" << std::endl;
}