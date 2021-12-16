#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubber", 145, 137), _target("none")
{
	std::cout << this->getName() << " Default's Construcrtor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("Shrubber", 145, 137), _target(target)
{
	std::cout << this->getName() << " Default's Construcrtor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& original)
{
    (void) original;
	std::cout << this->getName() << " Copy Construcrtor Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << this->getName() << " Destrucrtor Called" << std::endl;
}

const	std::string	ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ifstream inFile;
	inFile.open("source.txt");
	if (!inFile)
		std::cout << RED << "Open file error." << RESET << std::endl;

	std::string fileName = this->getTarget() + "_shrubbery";

	std::ofstream outFile(fileName.c_str());
	if (!outFile)
		std::cout << RED << "Create file error." << RESET << std::endl;

	std::string line;

	while(getline(inFile, line))
		outFile << line << std::endl;
	outFile.close();
	inFile.close();

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& original)
{
    (void) original;
	return *this;
}