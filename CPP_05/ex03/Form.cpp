#include "Form.hpp"

Form::Form() : _name("None"), _signed(false), _reqGradeToSign (1), _reqGradeToExec(1)
{
    std::cout << "Default's Construcrtor Called" << std::endl;
}

Form::~Form()
{
    std::cout << _name << " Destrucrtor Called" << std::endl;
}

Form::Form(const Form& rhs) : _name(rhs._name), _signed(rhs._signed), _reqGradeToSign(rhs._reqGradeToSign), _reqGradeToExec(rhs._reqGradeToExec) 
{
    std::cout << "Copy Construcrtor Called" << std::endl;
}

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec) : _name(name), _signed(false), _reqGradeToSign(gradeToSign), _reqGradeToExec(gradeToExec)
{
    std::cout << "Tryng to build " << _name << " Form"  << std::endl;
    if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExec > 150)
        throw GradeTooLowException();
    else
    std::cout << "Construcrtor Called for " << _name << " Form" << std::endl;
}

std::string		Form::getName() const 
{
    return this->_name;
}

bool			Form::checkFormSignedStatus(void) const 
{
	if (this->_signed)
		return true;
	return false;
}

bool			Form::getSigned() const
{
    return this->_signed;
}

int				Form::getReqGradeToSign() const
{
    return this->_reqGradeToSign;
}

int				Form::getReqGradeToExec() const
{
    return this->_reqGradeToExec;
}

void			Form::beSigned(const Bureaucrat& b)
{
    if (!checkFormSignedStatus())
    {
        if (b.getGrade() <= this->getReqGradeToSign())
            this->_signed = true;
        else
            throw Form::GradeTooLowException();
    }
    else
        std::cout << "this form is already signed" << std::endl;

}

void Form::execute(Bureaucrat const & executor) const
{
	std::cout << *this << "can be executed by " << executor << "? Let's try..." << std::endl;
	if (executor.getGrade() > this->_reqGradeToExec)
		throw GradeTooLowException();
}

Form &Form::operator=(const Form& rhs)
{
    this->_signed = rhs._signed;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Form& rhs)
{
    return out << "Form Name: " << rhs.getName() << std::endl  
    << "Signed: " << rhs.getSigned() << std::endl
    << "Grade to sign: " << rhs.getReqGradeToSign() << std::endl
    << "Grade to execute: " << rhs.getReqGradeToExec() << std::endl;
}