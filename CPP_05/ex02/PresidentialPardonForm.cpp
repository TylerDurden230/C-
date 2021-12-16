#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("President", 25, 5), _target("none")
{
	std::cout << this->getName() << "Default's Construcrtor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("President", 25, 5), _target(target)
{
	std::cout << this->getName() << " Default's Construcrtor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& original)
{
	(void) original;
	std::cout << this->getName() << "Copy Construcrtor Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << this->getName() << " Destrucrtor Called" << std::endl;
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
	(void) original;
	return *this;
}