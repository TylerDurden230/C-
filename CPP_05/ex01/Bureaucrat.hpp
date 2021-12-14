#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat {
	private:
		const std::string _name;
		int				_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat& rhs);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat& rhs);
		std::string		getName() const;
		int				getGrade() const;
		void	increment();
		void	decrement();
		void	signForm(Form);
		class 			GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Exception: Grade too High";
			}
		};
		class 			GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Exception: Grade too Low";
			}
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& rhs);

#endif