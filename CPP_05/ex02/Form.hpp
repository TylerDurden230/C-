#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"


class Form {
	private:
		const std::string _name;
		bool              _signed;
		const int         _reqGradeToSign;
		const int         _reqGradeToExec;
	public:
		Form();
		virtual ~Form() = 0;
		Form(const Form& rhs);
		Form &operator=(const Form& rhs);
		Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec);
		std::string		getName() const;
		bool			getSigned() const;
		int				getReqGradeToSign() const;
		int				getReqGradeToExec() const;
		void			beSigned(const Bureaucrat& b);
		virtual void 	execute(Bureaucrat const & executor) const;
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

std::ostream& operator<<(std::ostream& out, const Form& rhs);

#endif