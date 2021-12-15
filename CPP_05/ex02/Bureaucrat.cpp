#include "Bureaucrat.hpp"
#include "Form.hpp"

		Bureaucrat::Bureaucrat() : _name("Bureau"), _grade(1)
        {
            std::cout << "Default's Construcrtor Called" << std::endl;
        }
        
        Bureaucrat::Bureaucrat(const Bureaucrat& rhs)
        {
            *this = rhs;
        }

        Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
        {
            std::cout << "Tryng to build Bureaucrat " << _name << std::endl;
            if (grade < 1)
                throw GradeTooHighException();
            else if (grade > 150)
                throw GradeTooLowException();
            else
            std::cout << "Construcrtor Called for Bureaucrat " << _name << std::endl;
        }

		Bureaucrat::~Bureaucrat()
        {
            std::cout << "Destrucrtor Called for Bureaucrat " << _name << std::endl;
        }

		Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
        {
            this->_grade = rhs._grade;
            return *this;
        }

		std::string     Bureaucrat::getName() const
        {
            return this->_name;
        }

		int				Bureaucrat::getGrade() const
        {
            return  this->_grade;
        }

        void	Bureaucrat::increment()
        {
            if (this->_grade == 1)
                throw Bureaucrat::GradeTooHighException();
            else
            {
                this->_grade--;
                std::cout << _name << ": Grade Incremented" << std::endl;
            }
        }

		void	Bureaucrat::decrement()
        {
            if (this->_grade == 150)
                throw Bureaucrat::GradeTooLowException();
            else
            {
                this->_grade++;
                std::cout << _name << ": Grade Decremented" << std::endl;
            }
        }

        void	Bureaucrat::signForm(Form & f)
        {
            try 
            {
                f.beSigned(*this);
                std::cout << this->getName() << " signs " << f.getName() << " Form " << std::endl;
            }
            catch (std::exception &e) 
            {
                std::cout << this->getName() << " cannot sign " << f.getName() << " Form because of ";
                std::cout << e.what() << std::endl;
            }
        }

        std::ostream& operator<<(std::ostream& out, const Bureaucrat& rhs)
        {
            return out << "Name: " << rhs.getName() << ", bureaucrat grade: " << rhs.getGrade();
        }