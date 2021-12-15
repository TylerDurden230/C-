#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form{
	private:
		const std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm& original);
        virtual	~RobotomyRequestForm();
		const	std::string	getTarget() const;
		void execute(Bureaucrat const & executor) const;
		RobotomyRequestForm &operator=(const RobotomyRequestForm& original);
};
#endif
