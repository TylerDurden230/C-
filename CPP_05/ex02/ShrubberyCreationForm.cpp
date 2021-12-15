#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubber", 72, 45), _target("none")
{
	std::cout << "Default's Construcrtor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("Shrubber", 72, 45), _target(target)
{
	std::cout << "Default's Construcrtor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& original)
{
	std::cout << "Copy Construcrtor Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Deconstrucrtor Called" << std::endl;
}

const	std::string	ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	const std::string content = 
   ".'o'."
   " .o.'."
   ".'.'o'."
  "o'.o.'.o."
 ".'.o.'.'.o."
".o.'.o.'.o.'."
"  [_____]"
"  \\___/" ;
	std::ofstream out;
	const std::string filename = this->_target + "_shrubbery";
    out.open(filename);
    if (!out) {
        std::cout << "File not created!" << std::endl;
		return;
    }
    else {
        out << content;
        out.close();
        std::cout << "Congratulation! " << this->_target << "_shrubbery has been created successfully!" << std::endl;
    }
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& original)
{
	(void)original;
	return	*this; 
}