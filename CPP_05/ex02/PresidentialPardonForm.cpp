#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("President", 25, 5), _target("none")
{
	std::cout << "Default's Construcrtor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("President", 25, 5), _target(target)
{
	std::cout << "Default's Construcrtor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& original)
{
	std::cout << "Copy Construcrtor Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Deconstrucrtor Called" << std::endl;
}

const	std::string	PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox!" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& original)
{
	(void)original;
	return	*this; 
}