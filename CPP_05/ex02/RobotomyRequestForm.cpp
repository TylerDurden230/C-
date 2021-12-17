#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robot", 72, 45), _target("none")
{
	std::cout << "Default's Construcrtor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("Robot", 72, 45), _target(target)
{
	std::cout << "Default's Construcrtor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& original)
{
	(void) original;
	std::cout << "Copy Construcrtor Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor Called" << std::endl;
}

const	std::string	RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << BLUE << "DrIlLInG NoiSeS..." << RESET << std::endl;
	srand(time(NULL));
    if (rand()%2) {
        std::cout << BLUE << this->_target << " has been robotomized successfully!" << RESET << std::endl;
    }
    else {
		std::cout << RED << "Oh no...what a failure! " << this->_target << " can't be robotomized." << RESET << std::endl;
    }
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& original)
{
	(void)original;
	return *this;
}