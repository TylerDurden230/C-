#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm: public Form{
	private:
		const std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm& original);
        virtual	~PresidentialPardonForm();
		const	std::string	getTarget() const;
		void execute(Bureaucrat const & executor) const;
		PresidentialPardonForm &operator=(const PresidentialPardonForm& original);
};
#endif