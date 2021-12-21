#ifndef TYPE_HPP
#define TYPE_HPP

#include <iostream>

class Type{
	private:
		std::string _type;
		std::string _expr;
		int 		_impossible; 
		int			_int;
		char		_char;
		float		_float;
		double		_double;
	public:
		Type();
		Type(const std::string expr);
		~Type();
		std::string getType() const;
		void    setExpression(const std::string expr);
		bool    isFloat();
		bool    isDouble();
		bool    isInt();
		bool    isChar();
		void    analyse();
		void    print();
		void	toChar() const;
		void    toInt() const;
		void	toFloat() const;
		void    toDouble() const;
		void	evalType(std::string::size_type sz);
		void	checkType(int step, std::string::size_type sz);
};

#endif