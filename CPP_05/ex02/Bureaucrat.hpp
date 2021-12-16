#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

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
		void	signForm(Form & f);
		void	executeForm(Form const & form);
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