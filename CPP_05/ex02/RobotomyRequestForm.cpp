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
	std::cout << "Deconstrucrtor Called" << std::endl;
}

const	std::string	RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "DrIlLInG NoiSe " << std::endl;
	Form::execute(executor);
	srand(time(NULL));
    if (rand()%2) {
        std::cout << this->_target << " has been robotomized successfully!" << std::endl;
    }
    else {
		std::cout << "Oh no .. what a fail! You can't robotomized " << this->_target << std::endl;
    }
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& original)
{
	(void)original;
	return *this;
}